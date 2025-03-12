#include <stdio.h>
int main(){
    int arr[30] = {0}; //later change everything back to 1 and what's left will be the one who didn't do their gwaje
    //cuz it's 28 khu 
    for(int i=0; i<28; i++){
        int input;
        scanf("%d", &input);
        //cuz array starts from 0 and input starts from 0; 
        arr[input-1] = 1; //set the flag to 1 and if it's not than print the no: 
    }

    for(int i=0; i<30; i++){
        if(arr[i] == 0){
            printf("%d ", i+1); //cuz hakbeon starts from 1; 
        }
    }
}