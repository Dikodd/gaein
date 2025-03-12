#include <stdio.h>
#include "head.h"
int div(int a, int b){
    int result; 
    if(b!=0){
        result  = a/b; 
    }else{
        result = -1; 
    }
    return result; 
}