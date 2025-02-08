#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    int Data;
    struct LNode* next;
} LNode, *LinkList;

void create(LNode *L){
    LNode *S,*T=L;

    int x,i,a;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        S=(LNode*)malloc(sizeof(LNode));
        scanf("%d",&a);
        S->Data=a;
        S->next=NULL;
        T->next=S;
        T=S;
        
    }
    
}

void hebing(LNode*L1,LNode*L2,LNode *L){
    LNode *T=L,*T1=L1,*T2=L2,*S;
    T1=T1->next;
    T2=T2->next;
    while(T1->next!=NULL&& T2->next!=NULL){
    if(T1->Data>T2->Data){
        S=(LNode*)malloc(sizeof(LNode));
        S->next=NULL;
        S->Data=T2->Data;
        T2=T2->next;
        T->next=S;
        T=S;

    }else if(T1->Data<=T2->Data){
        S=(LNode*)malloc(sizeof(LNode));
        S->next=NULL;
        S->Data=T1->Data;
        T1=T1->next;
        T->next=S;
        T=S;
    }
    }
    while (T1 != NULL) {
        S = (LNode*)malloc(sizeof(LNode));
        S->Data = T1->Data;
        S->next = NULL;
        T->next = S;
        T = S;
        T1 = T1->next;
    }

    while (T2 != NULL) {
        S = (LNode*)malloc(sizeof(LNode));
        S->Data = T2->Data;
        S->next = NULL;
        T->next = S;
        T = S;
        T2 = T2->next;
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
    LNode *L1,*L2,*L;
    L1=(LNode*)malloc(sizeof(LNode));
    L2=(LNode*)malloc(sizeof(LNode));
    L=(LNode*)malloc(sizeof(LNode));
    L1->next=NULL;
    L2->next=NULL;
    L->next=NULL;
    create(L1);  //初始化
    create(L2);  //初始化
    hebing(L1,L2,L);    //合并
    print(L);        // 打印链表

    system("pause");
    return 0;
}
