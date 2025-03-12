#include <stdio.h>
int isHansu(int n){
    if(n<100){
        return 1; 
    }else{
        int a, b, c; 
        //works fine cuz n<1000 else idk bro
        a = n/100; 
        b = (n/10) %10; 
        c = n%10; 
        return (a-b == b-c); 
    }    
}


int main(){
    int n; //n must be less than 1000; 
    int count = 0; 
    scanf("%d", &n); 
    //cuz it starts from 1 to n less than 1000
    for(int i=1; i<=n; i++){
        if(isHansu(i)){
            count++; 
        }
    }
    printf("%d", count); 
    return 0; 

}