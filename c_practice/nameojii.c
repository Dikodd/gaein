#include <stdio.h>
int main(){
    int n = 10; 
    int arr[n]; 
    int result[n]; //to initialize it to 0s and if divisible by 42 change it to 1; 
    int count = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]); 
        //printf("%d ", arr[i]); 
    }

    for(int i=0; i<n; i++){
        result[i] = arr[i]%42;    
    }

     for(int i=0; i<n-1; i++){
        int isEqual = 0; //assume from not equal to each other 
        for(int j=i+1; j<n; j++){
            if(result[i] == result[j]){
                isEqual = 1;
                count++;
                break;   
            }

            if(isEqual){
                count++; 
            }
        }
    }



    for(int i=0; i<n; i++){
        printf("\n%d ", result[i]); 
        
    }
    printf("Diff elements: %d", count); 


    return 0;
}