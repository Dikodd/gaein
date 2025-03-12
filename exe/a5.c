#include <stdio.h>
int main(){
    //
    char ans[7] ={'MON', 'TUES', 'WED', 'THURS', 'FRI', 'SAT', 'SUN'}; 
    int year = 2007; 
    /*
    check if leap year or not
    which month how many days
    which day the given date is 

    jan 31
    feb   29
    march  31
    april  30
    may  31
    june  30
    july  31
    august  31
    september   30
    october 31
    november  30
    december 31
    */ 

    if(year%400 ==0 && year%100==0 && year%4==0){
        //feb + 1; 
    }
    return 0; 
}