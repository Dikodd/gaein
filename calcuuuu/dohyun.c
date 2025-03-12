#include <stdio.h>
//the wrong one
int main(){
    int basket, times; 
    int j, j1; 
    scanf("%d %d", &basket, &times);
    int arr[basket]; 
    int temp[basket]; 
    int swap = 0; 
    for(int i=1; i<=basket; i++){
        arr[i]= i; 
        temp[i] = i;
    }
    /*
    5 4
    1 2
    3 4
    1 4
    2 2  * pyat tha nar

    3 1 4 2 5  

    while(times>=1){
        scanf("%d %d", &j, &j1); 
        temp[j-1] = arr[j1-1];
        printf("%d is:\n", temp[j-1]);
        temp[j1-1] = arr[j-1]; 
        printf("%d is ", temp[j1-1]);
        arr[j1-1] = temp[j1-1]; 
        times--; 
    }  
    */
    while(times>=1){
        scanf("%d %d", &j, &j1);
        if(temp[j]!=0){
             temp[j] = arr[j1];
             swap=1;
            //arr[j1] = temp[j];

            printf("sup is %d\n", temp[j]);
            //printf("%d\n", arr[j]);
            temp[j1] = arr[j];
            //arr[j] = temp[j1];

            printf("gee is %d\n", temp[j1]);
            for(int p=1; p<=basket; p++){
            
            printf("%d  ", temp[p]); 
            ////여기임
        }}else if(swap==1){
                temp[j] = temp[j1];
                temp[j1] = temp[j];
            }
            times--;  
       
    }
    
    for(int p=1; p<=basket; p++){
        
        printf("%d  ", temp[p]); 
    }
    

    return 0;
}