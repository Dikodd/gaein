#include <stdio.h>
void bubbleSort(int *arr, int length){
    for(int i = 0; i<length; i++){
        for(int j = 0; j<length-i-1; j++){
            if(*(arr+j) > *(arr+j+1)){
                int temp = *(arr+j+1); 
                *(arr+j+1) = *(arr+j); 
                *(arr+j) = temp; 
            }
        }
    }
}
int main(){
    int arr[] = {4,6,7,2,8,0,3}; 
    int length = sizeof(arr)/sizeof(arr[0]); 
    printf("Before\n"); 
    for(int i = 0; i<length; i++){
        printf("%d ", arr[i]); 
    }
    bubbleSort(arr, length);
    printf("\nAfter\n"); 
    for(int i = 0; i<length; i++){
        printf("%d ", arr[i]); 
    }

    return 0; 
}