#include <stdio.h>
#include <string.h>
int main(){
    char str[100]; 
    scanf("%[^\n]", str); 
    getchar(); 
    for(int i = 0 ; i<(int)strlen(str); i++){
        printf("%c", str[i]); 
        if(i%10 == 9){
            printf("\n"); 
        }
    }
    return 0; 
}