#include <stdio.h>
#include <string.h>
int main(){
    char str1[50]; 
    char str2[50]; 

    scanf("%[^\n]", str1); 
    getchar(); 
    scanf("%[^\n]", str2); 
    getchar(); 

    if(strcmp(str1, str2) == 0){
        printf("같다니까"); 
    }else{
        printf("달라"); 
    }
}