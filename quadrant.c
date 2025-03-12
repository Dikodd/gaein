#include <stdio.h>
int main(){
    int x, y;
    char quadrant;
    scanf("%d %d", &x, &y);
    if(x>0 && y>0){
        quadrant = 'A';
    }else if(x<0 && y>0){
        quadrant = 'B';
    }else if(x<0 && y<0){
        quadrant = 'C';
    }else
        quadrant ='D';
    
    printf("%c", quadrant);
    return 0;
}