#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[300];
    int n, k = 0;
    scanf("%s %d", str, &n);

    for(int i = 0; i < strlen(str); i++) {
        for(int j = 0; j < n; j++) {
            result[k] = str[i];
            k++;
        }
    }
    result[k] = '\0';
    printf("%s", result);
    return 0;
}
