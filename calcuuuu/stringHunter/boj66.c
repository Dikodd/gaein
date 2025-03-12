#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 
    int seen[26] = {0,}; 
    /*
    a b c d e f g h i j k l m n o p q r s t u v w x y z
    */ 
   scanf("%s", s); 
   getchar(); 
   for(int i = 0; i<25; i++){
        if(alphabet[i] == s[i]){
            seen[alphabet[i]] = i; 
        }
   }
    return 0; 
}