int add(int a, int b){
    return a+b; 
};
int sub(int a, int b){
    return a-b; 
}; 
int multi(int a, int b){
    return a*b; 
};
int div(int a, int b){
    int result; 
    if(b!=0){
        result  = a/b; 
    }else{
        result = -1; 
    }
    return result; 
}

