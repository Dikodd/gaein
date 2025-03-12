#include <stdio.h>
#include "head.h"

int main(){
    int a, b, addition, subtraction, multiplication, division; 
    char operator;
    
    scanf("%d %d", &a, &b); 
    scanf("%c", &operator); 
    
    switch (operator)
    {
    case '+':
        addition = add(a,b);
        printf("Addition of %d and %d : %d\n", a, b, addition);
        break;
    
    case '-':
        subtraction = sub(a,b);
        printf("Subtraction of %d and %d : %d\n", a, b, subtraction);
        break;
    
    case '*':
        multiplication = multi(a,b);
        printf("Multiplication of %d and %d : %d\n", a, b, multiplication);
        break;
    
    case '/':
        division = div(a,b); 
        if(division == -1){
        printf("Can't be divided by zero"); 
    }else{
         printf("Division of %d and %d : %d\n", a, b, division);
    }
        break;
    }   
    return 0; 
}