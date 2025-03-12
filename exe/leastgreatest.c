#include <stdio.h>
#include <math.h>
//빡센 버전
int main(){
    int size; 
    int greatest1, greatest2,greatest, smallest1, smallest2, smallest; 
    scanf("%d", &size); 
    int arr[size]; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    for(int i=0; i<arr_size; i++){
        scanf("%d", &arr[i]);
    }
    int index1= round(arr_size/2); //2;

    for(int j=0; j<=index1; j++){
        //loop for greatest
        if(arr[j]>arr[j+1]){
            greatest1 = arr[j]; 
            j++;
        }else{
            greatest1 = arr[j+1];
            j++; 
        }
    }

    for(int k=index1+1; k<=arr_size-1; k++){
        if(arr[k]>arr[k+1]){
            greatest2 = arr[k]; 
            k++;
    }else{
        greatest2 = arr[k+1]; 
        k++; 
    }
    }

    if(greatest1>greatest2){
        greatest = greatest1; 
    }else{
        greatest = greatest2; 
    }


    for(int j=0; j<=index1; j++){
        //loop for smallest
        if(arr[j]<arr[j+1]){
            smallest1 = arr[j]; 
            j++;
        }else{
            smallest1 = arr[j+1];
            j++; 
        }
    }

    for(int k=index1+1; k<=arr_size-1; k++){
        if(arr[k]<arr[k+1]){
            smallest2 = arr[k]; 
            k++;
    }else{
        smallest2 = arr[k+1]; 
        k++; 
    }
    }

    if(smallest1<smallest2){
        smallest = smallest1; 
    }else{
        smallest = smallest2; 
    }

    printf("%d %d", smallest, greatest); 

    return 0;
}