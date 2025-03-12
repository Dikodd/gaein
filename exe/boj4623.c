#include <stdio.h>
int d(int n){
    int sum = n; 
    while(n>0){
        sum+= n%10;
        n/=10;
    }

    return sum; 
}
int main(){
    int arr[10001] = {0};
    for(int i=1; i<=10000; i++){
        int index = d(i); //returns sum, that place has a predecessor
        //cuz 10000보다 작거나 같은
        if(index<=10000){
            arr[index] = 1; 
        }
    }

    for(int j=0; j<=10000; j++){
        if(arr[j] == 0){
            //notice j is printed instead of arr[j], cuz arr[j] only contains 0 or 1; thus that point ka that value ko lo chin yin j ko output
            printf("%d\n", j);
        }
    }
    return 0; 
}