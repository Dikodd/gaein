#include <stdio.h>
int n; 
void printUndies(int ctr){
    for(int i=0; i<ctr * 4; i++){
        printf("_");
    }
}

void printFunction(int ctr){
    //int ctr=0; 
    if (ctr == n){
        printUndies(ctr);
        printf("\"재귀함수가 뭔가요.\"\n");
        printUndies(ctr);
        printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
        printUndies(ctr);
        printf("라고 답번하였지.\n");
        return;
    }

    printUndies(ctr);
    printf("\"재귀함수가 뭔가요\"\n");
    printUndies(ctr);
    printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\"\n");
    printUndies(ctr);
    printf("마을 사람들은 모두 그 선언에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
    printUndies(ctr);
    printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선언에게 한 선비가 찾아와서 물었어.\"\n");

    printFunction(ctr+1);
    printUndies(ctr);
    printf("라고 답변하였지.\n");
}
int main(){ 
    scanf("%d", &n);
    printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
    printFunction(0); 
    return 0; 
}