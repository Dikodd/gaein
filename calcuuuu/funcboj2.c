#include <stdio.h>
int self_numCheck(int i){
    int sum = i; 
    while(i>0){
        sum+= i%10; 
        i/=10; 
    }

    return sum; 
}
int main(){
    /*
    less than 10000
    */
   int arr[10001] = {0,};
   for(int i=1; i<=10000; i++){
        int index = self_numCheck(i);
        if(index<=10000){
            arr[index] = 1; 
        }
   }

   for(int j=1; j<=10000; j++){
    if(arr[j] == 0){
        printf("%d ", j); 
    }
   }
    return 0; 
}