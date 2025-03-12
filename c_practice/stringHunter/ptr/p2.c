#include <stdio.h>
void square(int *ptr, int *sq){
    *sq = *(ptr) * *(ptr); 
}
int main(){
    int a ;
    int *ptr = &a;  
    scanf("%d", &a); 
    printf("You typed: %d\n", a); 
    int sq; 
    square(ptr, &sq); 
    printf("제곱 함수 처리 후: %d\n", sq); 
    return 0; 
}