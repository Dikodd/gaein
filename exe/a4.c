#include <stdio.h>
int main(){
    int arr[4][4];
    int count = 1; 
    for(int i = 0; i<4; i++){
        for(int j=0; j<4; j++){
            arr[i][j] = count++ ; //3 //4- ((i+1)%4)
    }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");


    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            int temp; 
            temp = arr[i][j]; 
            arr[i][j] = arr[j][i];
            arr[j][i] = temp; 

            printf("%d\t", arr[i][j]);
        }
        printf("\n");

    }

    return 0; 
}
