#include <stdio.h>
int main(){
    int num, times;
    int i, j, temp;  
    scanf("%d %d", &num, &times); 
    int basket[num]; 
     /*
    5 4
    1 2
    3 4
    1 4
    2 2  * pyat tha nar

    3 4 1 2 5; 
    */
    for(int i=0; i<num; i++){
        basket[i] = i+1; 
    }

    while(times>=1){
        
        scanf("%d %d", &i, &j);
        if(i==j){
            temp=basket[i-1];
            basket[i-1] = basket[i];
            basket[i] = temp; 
        }else{
            temp = basket[i-1]; 
            basket[i-1] = basket[j-1];
            basket[j-1] = temp; 
        }
        
        
        times--;
    }

    for(int p=0; p<num; p++){
        
        printf("%d  ", basket[p]); 
    }
}