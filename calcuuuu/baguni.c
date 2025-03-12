#include <stdio.h>
int main(){
    int basket, times;
    scanf("%d %d", &basket, &times); 
    int i, j, k; 
    int arr[basket]; 

    //initialize shit cuz it gives weird values
    
    for (int i = 0; i < basket; i++) {
        arr[i] = 0; // Initialize array to 0
    }
    
    //i for baguni
    //j for till which baguni
    //gong no; 
    //공을 넣어 for m times
    /*
    put gong in basket? already there? kick out n put the gong
    
    5 5 5 5 5 = basket

    4 times

    1 2 3 ==> from 1 to 2 put 3 
    3 4 4 ==> from 3 to 4 put n4
    1 4 1 ==> from 1 to 4 put 1
    2 2 2 ==> from 2 to 2 put 2

    1 2 1 1 0
    */
    printf("Which basket do you wanna put your gong: \n"); 
    while(times>=1){ 
        scanf("%d %d %d", &i, &j, &k);

        //notice i-1 because array starts from 0;
        for(int l=i-1; l<j; l++){
            //check if the bitch has an element in it;
            if(arr[l] != 0 ){
                arr[l] = k; 
            }else{
                arr[l] = k;
            }
        }
        times--; 
    }

    //if the baguni has no element in it
    /*
    for(int a=0; a<=basket; a++){
        if(!arr[a]){
            arr[a]=0;
        }  
    }
    */
    

    for(int p=0; p<basket; p++){
        printf("%d  ", arr[p]); 
    }
    return 0; 
}