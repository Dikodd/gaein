#include <stdio.h>
void findLargest(int *arr, int *large){
    int len = sizeof(arr)/sizeof(arr[0]); 
    for(int i = 0; i<5; i++){
        if(*(arr+i) > *(arr+i+1)){
            *large = *(arr+i); 
        }
        
    }
}
int main(){
    int arr[5] = {1,2,3,4,5}; 
    int large; 
    findLargest(arr, &large); 
    printf("Large: %d", large); 
    return 0; 
}