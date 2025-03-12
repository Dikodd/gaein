#include <stdio.h>
#include <string.h>

int main(){
    char str[100]; 
    scanf("%[^\n]", str); 
    getchar(); 
    printf("%d", (int) strlen(str)); 
    return 0; 
}