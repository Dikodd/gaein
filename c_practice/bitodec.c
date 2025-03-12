#include <stdio.h>
#include <math.h>

int main(){
    int binary, remainder; 
    int decimal = 0; //decimal mr bl lr lr pg lo
    int times = 0; 
    printf("Type in the binary no: you want to convert: "); 
    scanf("%d", &binary); 
    while(binary!=0){
        remainder = binary % 10; //remainder
        binary/=10; //quotient
        decimal += remainder * (int) pow(2,times);   
        times++;
    }
    printf("%d in decimal val is %d", binary, decimal);
    return 0; 
}