#include <stdio.h>
int main(){
    /*
    problems 
    101 ka hr ko how thain ma ll / array nk loke khk but doesn't work
    */
    int arr[5][2]; 
    for(int i=0; i<5; i++){
        for(int j=0; j<2; j++){
            //cuz 101 102 201 202; 
            printf("%d0%d호에 사시는 분??", i+1, j+1); 
            scanf("%d", &arr[i][j]); 
        }
    }

    for(int i=5; i>=1; i--){
        for(int j=0; j<2; j++){
            printf("%d층        %d", i, arr)
        }
    }

    return 0; 

}