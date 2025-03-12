#include <stdio.h>
#include <string.h>
int main(){
    char input[50]; 
    scanf("%[^\n]", input); 
    getchar(); 
    char compareStr[] = "strawberry"; 
    if(strcmp(input, compareStr)){
        printf("Exists"); 
    }else{
        printf("Doesn't exist"); 
    }
}