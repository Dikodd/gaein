#include <stdio.h>
int main(){
    int a,b; 
    int n=10; 
    int count = 1; 
    int arr[n]; 
    int result[n]; 

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        result[i] = arr[i]%42; 
        
    }
    for(int i=0; i<n; i++){
        printf("%d ", result[i]);
    }
    

    for (int i = 0; i < n - 1; i++) {
        
        int flag =0; 
        for (int j = i + 1; j < n; j++) {
            if(result[i] != result[i+1]){
            count++;
            break;
    }
            if (result[i] == result[j]) {
                flag = 1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }


    printf("\n%d times", count); 
    return 0; 
}