#include <stdio.h>
int main(){
    int n, search; 
    printf("size of array\n");
    scanf("%d", &n);
    int arr[100]; 
    int index = 0;
    printf("Elements of array: \n");
    for(int i=0; i<n; i++){ 
        scanf("%d", &arr[i]);
    }
 
    printf("Element to search:  ");
    scanf("%d", &search);
    for(int i=0; i<n; i++){
        if(arr[i] == search){
            index++;
        }
    }printf("%d", index);
    
    return 0; 
}