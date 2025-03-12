#include <stdio.h>
int main(){
    int a_size, n;
    int r_size = 0;   
    scanf("%d", &a_size);
    printf("\n");
    int arr[a_size];
    for(int i=0; i<a_size; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &n);
    for(int i=0; i<a_size; i++){
        if(arr[i] < n){
            result_arr[r_size] = i; 
        }
    }
    
    return 0; 
}