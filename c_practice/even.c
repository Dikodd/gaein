#include <stdio.h>
int main(){
    int n; 
    int flag = 0; 
    scanf("%d", &n); 
    //isOdd = 0;  use a boolean value 
    
    int arr[n];
    int even[n]; 
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<n; i++){
        if(arr[i]%2 == 0){
            continue; 
        }else{
            printf("odd"); 
            break;
        }
        printf("Even"); 
    } 

    /*
    if(a[i]%2 != 0){
        printf("odd");
        break;
         //if you even find a single odd in your arr it terminates the process; 
    }else{
        printf("Even")
        you can also use flag to print odd; ///////
    }
    */


    /*
    for(int i=0; i<n; i++){
            printf("%d", even[i]); 
    }
    */
        

    
    
    return 0; 
}