#include <stdio.h>
int main(){
    char arr[5][15];
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            scanf(" %c", &arr[i][j]); //space before %c to ignore white space
        }
    } 
    
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            printf("%c", arr[j][i]);
        }
    } 

    return 0;
}