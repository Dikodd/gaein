#include <stdio.h>
int main(){  
    
    int n = 10;
    int sum = 0; 
    int sum2 = 0;   
    int arr[n]; 
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]); 
    }
    int mid = n/2;
    /*one loop is also ok
    (if i=0 => size){
        if(i<size/2){
            leftsum = leftsum +a [i];
        }else{
            rs = rs +a[i];
        }
        if(ls>rs)? ls : rs
    }
    */



    for(int i=0; i<mid-1; i++){
        sum+= arr[i]; 
    } 

    for(int i=mid+1; i<=n; i++){
        sum2+= arr[i]; 
    } 

    if(sum>sum2){
        printf("Left-skewed");
    }else if(sum<sum2){
        printf("Right-skewed"); 
    }else{
        printf("No skewness");
    }
}