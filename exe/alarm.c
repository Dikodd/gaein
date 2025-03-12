#include <stdio.h>
#include <math.h>
int main(){
    int H, M; 
    scanf("%d %d", &H, &M);
    int HtoM = H * 60 + M;
    int alarm = HtoM - 45;
    double a= (double) alarm/60;
    int a1 = (int) a; 
    double double_part = a-a1;
    double m = round(double_part * 60);  
    if(m<0){
        m+=60;
        a1-=1;
        if(a1<0){
            a1=23;
        }
    }
    

    printf("%d %.0lf",  a1, m);
    
    return 0;
}