#include <stdio.h>
#include <stdlib.h>

int is_hansu(int n) {
    if (n < 100) {
        // Numbers less than 100 are always Hanse numbers
        return 1;
    } else {
        // Extract the individual digits of the number
        int digit[3];
        for (int i = 0; i < 3; i++) {
            digit[i] = n % 10;
            n /= 10;
        }
        // Check if the difference between adjacent digits is the same
        return (digit[0] - digit[1] == digit[1] - digit[2]);
    }
}


int main() {
    int n, count = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (is_hansu(i)) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
