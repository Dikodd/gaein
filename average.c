#include <stdio.h>
int main(){
    int avg = 0; 
    int testCase; 
    double count = 0; 
    double percent; 
    scanf("%d", &testCase);
    int average[testCase]; 
    int average_size = sizeof(average)/sizeof(average[0]);
    //printf("%d", average_size);
    for(int i=0; i<testCase; i++){
        scanf("%d", &average[i]);
        avg+=average[i];        
    }
    avg/=testCase;
    printf("%d\n", avg); 
    for(int j=0; j<average_size; j++){
        if(average[j]>avg){
            count++; 
            
        }
    }
    percent = (double) (count/testCase) * 100; 
    printf("%lf percent of students passed the average", percent); 
    /*
   
    printf("%d", avg);
    */
    

    return 0; 
}