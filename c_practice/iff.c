#include <stdio.h>
int main(){
    int a, b; 
    //int result; 
    char operator;
    printf("operator (+, -, *, /)");
    scanf("%c", &operator);

    printf("two no:\n"); 
    scanf("%d %d", &a, &b);

    /*
    if(operator == '+'){
        printf("%d + %d is %d",a, b, a+b);
    }else if(operator == '-'){
        printf("%d - %d is %d",a, b, a-b);
    }else if(operator == '*'){
        printf("%d * %d is %d",a, b, a*b);
    }else if(operator == '/'){
        printf("%d / %d is %d", a, b,  a/b );
    }
    */
    
    switch (operator)
    {
    case '+':
        printf("%d + %d is %d",a, b, a+b);
        break;
    case '-':
        printf("%d - %d is %d",a, b, a-b);
        break;
    case '*':
        printf("%d * %d is %d",a, b, a*b);
        break;
    case '/':
        printf("%d / %d is %d",a, b, a/b);
        break;
    
    default:
        printf("\nGive a valid operator.");
        break;
    }
    
    
    return 0; 
}