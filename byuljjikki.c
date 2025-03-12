#include <stdio.h>
//convert from binary to decimal 
int main(){
    int n; 
    int space, stars; 
    printf("Enter no: of lines: ");
    scanf("%d", &n); 
    for(int i=n; i>=1; i--){
        for(space = 0; space<=n-i; space++){
            printf(" "); 
        }
        for(stars=0; stars<i; stars++){
            printf("*"); 
        }printf("\n");
    }
    
    return 0;
}