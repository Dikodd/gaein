#include <stdio.h>
#include "header.h"
int div(int a, int b){
    if(b!=0){
        return a/b; 
    }else{
        return -1; 
    }
}