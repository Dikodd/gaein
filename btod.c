#include <stdio.h>
#include <math.h>

//convert from binary to decimal 
int main(){
    int bi, remainder , n;
    int times = 0; 
    int decimal = 0; 
    printf("Enter the binary you want to convert:  "); 
    scanf("%d", &bi); 

    while(bi!=0){
        remainder = bi%10;
        bi/=10; 
        decimal += remainder * ((int) pow(2, times));
        ++times;        
    }
    printf("Deci is %d", decimal);
    
    

    return 0;
}