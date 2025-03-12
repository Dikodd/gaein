#include <stdio.h>
#include <string.h>
int main(){
    char str[20]; char str1[20]; char str2[20]; 
    scanf("%[^\n]", str); 
    getchar(); 
    scanf("%[^\n]", str1); 
    getchar(); 
    scanf("%[^\n]", str2); 
    getchar(); 
    
    char str3[20] = "학우님";
    strcat(str, str3); 
    strcat(str1, str3);
    strcat(str2, str3); 

    printf("%s %s %s", str, str1, str2);

    return 0; 
}
 





