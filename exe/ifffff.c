#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int first = t/1000; //1
    //123 234 134 124 
    int sec = (t/100)%10;
    int third = (t/10)%10;
    int fourth = t%10;

    printf("%d\n", first);
    printf("%d\n", sec);
    printf("%d\n", third);
    printf("%d\n", fourth);

    printf("\n\n");

    int n1 = 100*sec+ 10*third +fourth ; //234
    int n2 = 100*first + 10*third + fourth; //134
    int n3 = 100*first + 10*sec + fourth; //124
    int n4 = 100*first + 10*sec + third; 

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    printf("%d\n", n4);



    if(n1>n2){
        if(n1>n3){
            if(n3>n4){
                printf("%d", n1);
            }
        };
    }else if(n2>n1){
        if(n2>n3){
            if(n3>n4){
                printf("%d", n2);
            }
        }
    }else if(n3>n1){
        if(n3>n2){
            if(n3>n4){
                printf("%d", n3);
            }
        }
    }else{
        printf("Biggest is %d", n4);
    }
     
    

    
    return 0; 
}