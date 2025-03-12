#include <stdio.h>
int fibonacci(int num){
    if(num==0){
        return 0; 
    }else if(num ==1){
        return 1; 
    }else{
        return (fibonacci(num-1) + fibonacci(num-2)); 
    }
    
}

int main(){
    int num; 
    scanf("%d", &num);
    int fib = fibonacci(num);
    printf("%d", fib);
    return 0; 
}