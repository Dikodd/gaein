#include <stdio.h>
int main(){
    /*
    30 sep april jun nov
    31
    29
    */
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day;
    int sum = 0; 
    scanf("%d %d", &month, &day);

    for(int i=0; i<month; i++){
        sum += months[i];
    }

    sum+= day;
    switch (sum % 7)
    {
    case 1:
        printf("Monday.\n");
        break;

    case 2:
        printf("Tuesday.\n");
        break;
    

    case 3:
        printf("Wednesday.\n");
        break;

    case 4:
        printf("Thursday.\n");
        break;

    case 5:
        printf("Friday.\n");
        break;

    case 6:
        printf("Saturday.\n");
        break;

    case 0:
        printf("Sunday.\n");
        break;
    }
    return 0; 
}