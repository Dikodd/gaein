#include <stdio.h>
//no 4
int main(){
    int arr[9]; 
    int max = -313378;
    int index; 
    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]); 
    }

    for(int i=0; i<9; i++){
        
        if(arr[i]>max){
            max = arr[i]; 
            index = i; 
        }
    }

    printf("%d\n", max); 
    printf("%d", index+1); 
    
    
    return 0; 
}