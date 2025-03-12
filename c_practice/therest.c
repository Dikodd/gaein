#include <stdio.h>
int main(){
    int n=10; 
    int result[n]; 
    int arr[n]; 
    int count = 0; 
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            result[i] = arr[i] % 42; 
        } else {
            result[i] = arr[i];
        }
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(result[i] == result[j]){
            count++; 
        }
        }
        
    }

    for(int i=0; i<n; i++){
        printf("%d ", result[i]); 
    }
    printf("diff no: are %d", count); 



    return 0; 
}