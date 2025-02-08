#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    int Data;
    struct LNode* next;
} LNode, *LinkList;

void tail_insect(LNode*L){
    int x;
    scanf("%d",&x);
    LNode *S,*T=L;
    while(x!=9999){
        S=(LNode*)malloc(sizeof(LNode));
        S->Data=x;
        S->next=NULL;
        T->next=S;
        T=S;
        scanf("%d",&x);
    }
}

void print(LNode *L){
    L=L->next;
    while(L!=NULL){
        printf("%d ",L->Data);
        L=L->next;
    }
}

int main(int argc, char const *argv[]) {
    LNode *L;
    L=(LNode*)malloc(sizeof(LNode));
    L->next = NULL; 
    tail_insect(L); 
    print(L);        // 打印链表

    system("pause");
    return 0;
}
