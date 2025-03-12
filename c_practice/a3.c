#include <stdio.h>
//#include <string.h>
int main(){
    int arr[5][2]; 
    //memset(arr, 0, sizeof(arr)); 
    for(int i=0; i<5; i++){
        for(int j=0; j<2; j++){
            //cuz 101 102 201 202; 
            printf("%d0%d호에 사시는 분??", i+1, j+1); 
            scanf("%d", &arr[i][j]); 
        }
    }
    
    printf("1호                 2호\n"); 
    printf("============================================\n");
    
     for(int i=4; i>=0; i--){
        printf("%d층", i+1); 
        for(int j=0; j<2; j++){
            printf("    %d  ", arr[i][j]);
        }
        printf("\n");
    }
   
    return 0; 
}