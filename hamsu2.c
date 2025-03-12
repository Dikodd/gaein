#include <stdio.h>
void printMessage(){
    printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다.\n");
}

int scanNumber(){
    int num;
    printf("\n정수 입력: " );
    scanf("%d", &num);
    return num;
}

int addNumbers(int a, int b){
    return a+b;
}

void printResult(int sum){
    printf("\nThe result is: %d", sum);
}

int main(){
    int num1, num2, sum; 
    printMessage();

    num1 = scanNumber();
    num2= scanNumber();
    
    printf("%d %d", num1, num2);
    sum = addNumbers(num1, num2);
    printResult(sum);
    return 0; 
}