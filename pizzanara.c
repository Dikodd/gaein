#include <stdio.h>
int main(){
    int pizza, chicken; 
    scanf("%d %d", &pizza , &chicken);
    for(int i=1; i<=100; i++){
        if(i%pizza == 0){
            printf("Pizza\n"); 
        }else if(i%chicken == 0){
            printf("Chicken\n");
        }else if(i%pizza == 0 && i%chicken == 0){
            printf("Pichi Set\n"); 
        }
    }
    
    return 0;
}