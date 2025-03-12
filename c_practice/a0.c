#include <stdio.h>
int main(){
    int arr[30] = {0, };
    int sum = 0;
    int count=0; 
    //scanf("%d", &count); 
    for(int i=0; i<count; i++){
        scanf("%d", &arr[i]); 
        while(1){
            sum+= arr[i]; 
            count++;
            if(arr[i] == -1){
                break;
            }
            
        }
    } 
    /*
    
    int arr[30];
    int count = 0; 
    int sum = 0; 
    while(1){
        scanf("%d", &arr[count++]); 
        if(arr[count] == -1){
            break;
        }
        sum+= arr[count++]; 
    }
    */

    printf("%d %d", sum, count); 
    return 0; 
}