#include <stdio.h>
#include <math.h>
int main(){
    int decimal; 
    int binary = 0;
    printf("Type in the decimal you want to convert: "); 
    scanf("%d", &decimal); 
    int power = (int) floor(log10(decimal)); 
    while(decimal !=0){
        binary*=10;
        binary += decimal % 2; 
        decimal/=2; 
        
        /*
        decimal = 7; 
        expected = 111; 

        binary*=
        decimal%=2; 
        
        */
    }
    printf("%d", binary); 
    

    return 0; 
}