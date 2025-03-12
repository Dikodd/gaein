#include <stdio.h>
int main(){
    //using for
   
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=9; i++){
        printf("\n%d * %d = %d", n, i, n*i);
    }
    return 0; 
}