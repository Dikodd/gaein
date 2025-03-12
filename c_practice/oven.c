#include <stdio.h>
int main() {
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    int min = B+C;

    if (min > 60){
    A += 1;
    min -= 60;
    
    if (min == 60 && A < 24) {
        A += 1;
        min = 0;
    }
    }

if (A >= 24){
    A -= 24;
}

printf("%d %d", A, min);
    return 0;
}