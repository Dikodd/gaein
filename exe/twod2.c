#include <stdio.h>
int main(){
    int arr[9][9];
    int max = -34567;
    int found[2]; 

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &arr[i][j]); 
        }
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                found[0] = i+1; 
                found[1] = j+1;
            }
        }
    }

    printf("%d\n", max);
    for(int i=0 ;i<2; i++){
        printf("%d ", found[i]);
    }


    return 0;
}