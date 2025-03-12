#include <stdio.h>
#include <math.h>
int main(){
    int sum = 0;  
    double deviation; 
    int num; 
    int variance; 
    int vsum = 0; 

    scanf("%d", &num);
    int arr[num]; 
    
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]); 
        sum+= arr[i];
        //sumSqrt += arr[i] * arr[i]; 
    }
    int mean = sum/num; 
    for(int i=0; i<num; i++){
       vsum += pow((arr[i] - mean), 2); 
    }

    variance = vsum/num; 

    deviation = sqrt(variance); 
    printf("%.2lf", deviation); 
    return 0; 
}