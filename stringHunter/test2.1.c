#include <stdio.h>
#include <string.h>

int main(){
    char name[5][2][100]; 
    for(int i = 0; i<5; i++){
        for(int j=0; j<2; j++){
            printf("%d0%d호에 누가 삽니까?", i+1, j+1);
            scanf("%[^\n]", name[i][j]); 
            getchar();  
        }
    }

    printf("        1호         2호\n"); 
    printf("============================\n"); 
    for(int i=4; i>=0; i--){
        printf("%d층  %s\t   %s\n", i+1, name[i][0], name[i][1]); 
    }
    return 0; 
}