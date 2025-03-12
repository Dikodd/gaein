#include <stdio.h>
#include <math.h>

int main(){
    int size; 
    int greatest, smallest; 
    scanf("%d", &size); 
    int arr[size]; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 

    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }

    greatest = smallest = arr[0];
    for(int j=1; j<arr_size; j++){
        if(arr[j]>greatest){
            greatest = arr[j]; 
        }

        if(arr[j]<smallest){
            smallest = arr[j]; 
        }
    }

    printf("%d %d", smallest, greatest); 
    return 0;
}
