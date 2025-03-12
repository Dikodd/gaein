//named 6 but actually 5
#include <stdio.h>
#include <string.h>

int main(){
    int n; 
    int sum = 0; 
    scanf("%d", &n); 
    getchar(); 
    char str[n]; 
    scanf("%[^\n]", str); 
    getchar(); 

    for(int i = 0; i<n; i++){
        sum += str[i] - 48; 
    }

    printf("%d", sum); 
    return 0; 
}