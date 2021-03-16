#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
using namespace std;

#define MAXSIZE 50

typedef char ElemType;
typedef struct{
    ElemType data[MAXSIZE];
    int top;
}SqStack;

void InitStack(SqStack &S){
    S.top=-1;
}

bool StackEmpty(SqStack S){
    if(S.top==-1) return true;
    else return false;
}

bool Push(SqStack &S,ElemType e){
    if(S.top==MAXSIZE-1) return false;
    S.data[++S.top]=e;
    return true;
}

bool Pop(SqStack &S,ElemType &e){
    if(S.top==-1) return false;
    e=S.data[S.top--];
    return true;
}

bool GetHead(SqStack S,ElemType e){
    e=S.data[S.top];
    return true;
}

// int main(){
//     SqStack S;
//     InitStack(S);
//     int x;
//     cout <<"请输入入栈元素，-9999 结束"<<endl;cin>>x;
//     while(x!=-9999){
//         Push(S,x);
//         cin>>x;
//     }
//     cout <<"栈内元素依次出栈："<<endl;
//     while(!StackEmpty(S)){
//         Pop(S,x);
//         cout<<x<<" ";
//     }
//     return 1;
// }