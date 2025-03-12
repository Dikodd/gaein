#include <stdio.h>
int combination(int a, int b){
    if(b==0 || a==b){
        return 0; 
    }else{
        //3 1  + 3 2
        return (combination(a-1, b-1) + combination(a-1, b));
    }
}
int main(){
    int a =4; int b = 2;
    //scanf("%d %d", &a, &b);
    int combi = combination(a,b);
    printf("%d", combi);

    return 0; 
}