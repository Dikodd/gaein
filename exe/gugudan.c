#include <stdio.h>
int main(){
    //using arrays
    int a[]={1,2,3,4,5,6,7,8,9};
    int a_size = sizeof(a)/sizeof(a[0]);

    int n[] = {1,2,3,4,5,6,7,8,9};
    int n_size = sizeof(n)/sizeof(n[0]);
    int i, m;
    //scanf("%d", &n);
    for(i=0; i<a_size; i++){
        for(int j=0; j<n_size; j++){
            m = n[j] * a[i];
            printf("%d * %d = %d", a[i], n[j], m);
        }printf("\n");
        
    }
    return 0; 
}