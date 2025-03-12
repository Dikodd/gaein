#include <stdio.h>
#include <string.h>
int main(){
    char str[50]; 
    scanf("%[^\n]", str); 
    printf("%d", (int) strlen(str)); 
    return 0; 
}