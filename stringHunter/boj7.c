#include <stdio.h>
#include <string.h>
int main(){
    int n; 
    scanf("%d", &n); 
    char str[20]; int t; 
    for(int i = 0; i<n; i++){

        scanf("%d %s",&t, str);
        getchar();  
        int len = strlen(str); 
        for(int i = 0; i<t; i++){
            for(int j=0; j<len; j++){
                printf("%c", str[j]); 
            }
        }printf("\n"); 
    }
    return 0; 
}