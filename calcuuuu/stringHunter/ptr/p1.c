#include <stdio.h>
void increment(int *ptr1, int *ptr2){
    *ptr1 = 30;  
    *ptr2 = 15; 
}
int main(){
    int num1 = 10; int num2 = 20; 
    int *ptr1 = &num1; 
    int *ptr2 = &num2; 

    increment(ptr1, ptr2); 
    printf("num1: %d, num2: %d", num1, num2); 
    //
    return 0; 
}