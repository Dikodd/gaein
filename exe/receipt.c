#include <stdio.h>
int main() {
    int A, B;
    while(scanf("%d %d", &A, &B) != EOF)    //works until the input stream is stopped by something which is when it reaches end of file 
    //if the user types ctrl+d in my system
        printf("%d\n", A+B);
    return 0;
}