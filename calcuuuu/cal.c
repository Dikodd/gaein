#include <stdio.h>
#include "header.h"
int main(){
    int a, b, result; 
    char o;
    scanf("%c", &o); 
    scanf("%d %d", &a, &b); 
    
    switch (o)
    {
    case '+':
        result = add(a, b); 
        printf("%d", result); 
        break;

    case '-':
        result = sub(a, b); 
        printf("%d", result); 
        break;

    case '*':
        result = mul(a, b); 
        printf("%d", result); 
        break;

    case '/':
        result = div(a, b); 
        if(result == -1){
            printf("Can't be divided by 0"); 
        }else{
            printf("%d", result); 
        }
        break; 
    }
    
    return 0; 
}
