#include <stdio.h>
//shilsub 1

//위에 있어야함
int getMin(int min, int num){ 
    for(int i=0; i<5; i++){
        if(num<min){
            min = num;
        }
    }
    return min; 
}

int getMax(int max, int num){ 
    for(int i=0; i<5; i++){
        if(num>max){
            max = num;
        }
    }
    return max; 
}

int main(){
    int arr[5]; 
    
    printf("Array input: "); 
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]); 
    }
    int min, max = arr[0];
    for(int i=0; i<5; i++){
        min = getMin(min, arr[i]);
    }

    for(int i=0; i<5; i++){
        max = getMax(max, arr[i]);
    }

    printf("%d %d", max, min );
    return 0; 
}



