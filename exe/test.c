#include <stdio.h>
int main(){
    printf("2023 화이팅!!!");
    printf("\n한터 화이팅\n");
    printf("\"붕어빵 먹고 싶대\"라고 말했다");


    printf("\n\n");
    printf("100%%");
    printf("\n%d", 100);
    printf("\n%c", 'F');
    printf("\n%f", 1.311);
    printf("\n%d %c %f", 100, 'G', 1.233);
    char a='A';

    printf("char 형 변수 [a]의 값 = [%d]\n", a
    );
    printf("변수 [a]의 값을 정수로 = [%c]\n", a);

    printf("[65] ㅔㅇ 대응하는 문자= [%c]\n", 65);
    printf("[A]에 대응하는 문자 = [%d]\n", 'A');

    int i;
    char c;
    float f;

    i=1;
    c='C';
    f= 1.234;
    double d = 1.234;



    printf("정수형:   %d\n", i);
    printf("문자형:   %c\n", c);
    printf("실수형:   %.8f\n", f);
    printf("double: %.9lf\n", d);


    return 0;
}