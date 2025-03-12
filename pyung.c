#include <stdio.h>
int main(){
    double m; //max out of all marks
    
    double average, result; 
    int noOfSub; 
    double sum = 0.0; 
    int max = -33121; 
    scanf("%d", &noOfSub); 
    double marks[noOfSub];
    for(int i=0; i<noOfSub; i++){
        scanf("%lf", &marks[i]);

    }

    for(int i=0; i<noOfSub; i++){
        sum+=marks[i]; //for the average 33 66 100
        if(marks[i]>max){
            max = marks[i]; 
        }

    }
    sum/=noOfSub; 
    result = (sum/(max *100)) * 10000; 
    printf("%lf", result); 
    

    return 0; 
}