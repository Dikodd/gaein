#include <stdio.h>
int main(){
    int n1, n2; 
    int rev1 =0; int rev2 = 0; 
    scanf("%d %d", &n1, &n2);

    while(n1!=0){
        rev1*=10; 
        rev1+=n1%10; 
        n1/=10;
    }

    while(n2!=0){
        rev2*=10; 
        rev2+=n2%10; 
        n2/=10;
    }

    if(rev1>rev2){
        printf("%d", rev1); 
    }else{
        printf("%d", rev2);
    }
    return 0; 
}