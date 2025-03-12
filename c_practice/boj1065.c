#include <stdio.h>
int hansu(int n){
    //khu sel???
    int a, b, c;
    if(n<100){
        return 1; //two digit numbers are always hansu which means the difference between each digits is the same and there's nothing to compare
    }else{
        a = n/100; 
        b = (n/10) % 10; 
        c = n%10; 
    }

    return (a-b == b-c); 
}



int main(){
    int n;
    int count = 0;  
    scanf("%d", &n);
    //start from 1 because greater than 1 and less than n;
    for(int i=1; i<=n; i++){
        if(hansu(i)){
            count++; 
        }
    }
    printf("%d", count);
    return 0; 
}