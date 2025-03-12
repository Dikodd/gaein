#include <stdio.h>
#include <string.h>

int main(){
    int t; 
    scanf("%d", &t); 
    char str[t];  
    char str1[t]; 
    for(int i = 0; i<t; i++){
        scanf("%s", str);
        getchar(); 
        str1[i] = str;  
        
        if(strlen(str) == 1){
            printf("%c %c", str[0], str[0]);
        }else{
            printf("%c %c", str[0], str[strlen(str)-1]);
        }
        
    }
    for(int i = 0; i<t; i++){
        if(strlen(str) == 1){
            printf("%c %c", str[0], str[0]);
        }else{
            printf("%c %c", str[0], str[strlen(str)-1]);
        }
        
    }
    return 0; 
}