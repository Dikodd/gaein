#include <stdio.h>
int main(){
    int reverse; 
    int result =0; 
    printf("num to reverse:  "); 
    scanf("%d", &reverse);
    while(reverse!=0){
        result*=10;
        result+=reverse%10; 
        reverse/=10;


        /*
        2345
        result = 0*10 = 0
        result = result + reverse%10 = 0+5
        reverse = 234

        result = result* 10 = 50; 
        result = result + reverse%10 = 50+4 = 54; 
        reverse = 23; 

        result = result *10 =  540; 
        result+= reverse%10 = 540 + 3 
        reverse = 2

        result = 543*10 = 5430; 
        result += reverse%10 = 5430 + 2; 
        revese = 0; // finish

        */
    }

    printf("REsult is: %d", result); 
    return 0; 
}