#include <stdio.h>
int main(){
    int grade; 
    int g; 
    printf("ENter your grade: ");
    scanf("%d", &grade);

    if(grade>90){
        printf("Grade is A");
    }else if(grade>80){
        printf("Grade is B");
    }else if(grade>70){
        printf("Grade is C");
    }else if(grade>60){
        printf("Grade is D");
    }else if(grade<60){
        printf("Grade is F");
    }
    
    g=grade/10;

    switch (g)
    {
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    
    default:
        printf("F");
        break;
    }
    return 0; 
}