#include <stdio.h>
#include <string.h>
int main(){
    char str[50]; 
    char strCpy[50]; 
    scanf("%[^\n]", str);
    strcpy(strCpy , str); 
    printf("%s %s", str, strCpy);  
    return 0; 

}