//6class.h

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

//add.c

#include <stdio.h>
#include "6class.h"

int add(int a,int b){
   return a+b;
}

//sub.c

#include <stdio.h>
#include "6class.h"

int sub(int a,int b){
   return a-b;
}

//mul.c

#include <stdio.h>
#include "6class.h"

int mul(int a,int b){
   return a*b;
}

//div.c

#include <stdio.h>
#include "6class.h"

int div(int a,int b){
   return a/b;
}

//main.c

#include <stdio.h>
#include "6class.h"

int main(){
   int a,b;
   char c;
   scanf("%d %d",&a,&b);
   getchar();
   scanf("%c",&c);
   
   if(c=='+'){
      printf("%d\n",add(a,b));
   }else if(c=='-'){
      printf("%d\n",sub(a,b));
   }else if(c=='*'){
      printf("%d\n",mul(a,b));
   }else if(c=='/'){
      printf("%d\n",div(a,b));
   }
}