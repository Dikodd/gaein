#include <stdio.h>
int main(){
    int arr[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            arr[i][j] = (i+1) * (j+1); 
            printf("%d\t", arr[i][j]);
        }printf("\n");

    }

/*
for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            
        }
        

    }
*/
    



    return 0; 
}