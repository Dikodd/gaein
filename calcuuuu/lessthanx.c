#include <stdio.h>
int main(){
    int size, search;
    scanf("%d %d", &size, &search); 
    int arr[size];
    //int arr_size =  sizeof(arr)/sizeof(arr[0]); 
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]); 
    }
    for(int s=0; s<size; s++){
        if(arr[s]<search){
            printf("%d ", arr[s]);
        }
    } 
    return 0;
}