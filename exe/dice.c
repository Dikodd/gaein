#include <stdio.h>
int main(){
    int a, b, c;
    int reward;
    int max(int num, int num2, int num3);
    //printf("Enter from 1 to 6: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && a==c){
        reward = 10000+ a*1000;
        printf("%d", reward);
    }else if(a==b || a==c){
        reward = 1000+a *100;
        printf("%d", reward);
    }else if(b==c){
        reward = 1000+ b*100;
        printf("%d", reward);
    }else{
        reward = max(a,b,c)*100;
        printf("%d", reward);
    }
    return 0;
}


int max(int num, int num2, int num3){
    if(num>num2 && num2>num3){
        return num;
    }else if(num2>num && num>num3){
        return num2;
    }else{
        return num3;
    }
}

