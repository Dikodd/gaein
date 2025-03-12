#include <stdio.h>
#include <math.h>

//if you want to know which gp of 10s your input falls into
int main() {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    // Find the power of 10 of the input number
    int power = (int)floor(log10(num));

    printf("The number entered %d\n", power);

    return 0;
}
