#include <stdio.h>
int main(){
    int n, n2;
    scanf("%d %d", &n, &n2); 
    int num = n+n2; 
    int c[num]; 
    int a[n], b[n2]; 

    /*
    duplicates could be the problem // size also
    *****sayar hr ka compare pee mha copy
    min(sizeA, sizeB);
    for(i=0; j=0;){
        //min shar nay chin
        (i<sizeA) && (j<sizeB) i++, j++; 
        A = 1 2  |  3
        B = 4 5  |

    //REMAIINING ELEMENTS (works for the first eg where 1 2 3 and 4 5)
    if(i<j){
         for(i =  ; i<sizeA; i++)
        from array A
    }

    for(int j = ; j<sizeB; j++){
        copy the rest from B to C 
    }
    }else{
        for(int j = ; j<sizeB; j++){
        copy the rest from B to C 
    }

    for(i =  ; i<sizeA; i++)
        from array A
    }
    }
    */

   //mine copy pee mha compare; 
    //first array
    int k = n; 
    for(int i =0; i<n; i++){
        scanf("%d", &a[i]); 
        c[i] = a[i];
    } 

    //second array
    for(int i =0; i<n2; i++){
        scanf("%d", &b[i]); 
        c[k] = b[i]; 
        k++;
    }

    printf("Before sorting");
    for(int no=0; no<num; no++){
        printf("%d ", c[no] );
    }

    printf("\n"); 

    
    for(int i=0; i<num; i++){
        int temp; 
        for(int j=i+1; j<num; j++){
            if(c[i]>c[j]){
                temp = c[j]; 
                c[j] = c[i]; 
                c[i] = temp; 
            }
        }
    }

    printf("After sorting");
    printf("\n"); 
    for(int no=0; no<num; no++){
        printf("%d ", c[no]);
    }
    return 0; 
}