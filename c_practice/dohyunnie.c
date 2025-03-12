#include <stdio.h>
int main(){
    int basket, times; 
    int i, j;
    int temp = 0; 
    scanf("%d %d", &basket, &times);
    int arr[basket]; 
    for(int i=1; i<=basket; i++){
        arr[i]= i; 
    }

    /*
    5 4
    1 2
    3 4
    1 4
    2 2  * pyat tha nar

    3 1 4 2 5  
    */
   
   while(times>=1){
        scanf("%d %d", &i, &j);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 
        times--; 
   }

   for(int p=1; p<=basket; p++){
        
        printf("%d  ", arr[p]); 
    }

    return 0; 
}
