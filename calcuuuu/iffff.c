#include <stdio.h>
int main(){
    //using nested-if
    int a, b, c, max;
    printf("Three integers: "); 
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(b>c){
            printf("%d", a);
        }
    }else if(b>a){
        if(a>c){
            printf("%d", b);
        }
    }else{
        printf("%d", c);
    }

    //using ternary operator
    max = (a>b) ? printf("%d", a) : printf("%d", b);

    return 0; 
}