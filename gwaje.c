#include <stdio.h>
int main(){
    int hakbeon[28];
    int absent[2];
    int count = 0;  
    for(int j=0; j<28; j++){
        scanf("%d", &hakbeon[j]); 
    }
    
    for(int i=1; i<=30; i++){
        int submitbool = 0; 
        for(int m=0; m<29; m++){
            if(i==hakbeon[m]){
                submitbool = 1; 
                break; 
            }
        }

        if(!submitbool){
            absent[count] = i; 
            count++;  
        }

    }

    for(int j=0; j<2; j++){
        printf("\n%d", absent[j]);
    }


    return 0; 
}