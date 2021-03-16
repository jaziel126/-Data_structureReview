#include<iostream>
using namespace std;

#define MAXSIZE 50
typedef int ElemType;
typedef struct{
    ElemType data[MAXSIZE];
    int front,rear;
}SqQueue;

void InitQueue(SqQueue &Q){
    Q.front=Q.rear=0;
}

bool QueueEmpty(SqQueue Q){
    if(Q.front==Q.rear){
        return true;
    }else return false;
}

bool Push(SqQueue &Q,ElemType e){
    if(Q.front==((Q.rear+1)%MAXSIZE)){
        return false;
    }
    Q.data[Q.rear]=e;
    Q.rear=(Q.rear+1)%MAXSIZE;
    return true;
}

bool Pop(SqQueue &Q,ElemType &e){
    if(Q.front==Q.rear) return false;
    e=Q.data[Q.front];
    Q.front=(Q.front+1)%MAXSIZE;
    return true;
}

int main(){
    SqQueue Q;
    InitQueue(Q);
    int x;
    cout<<"输入入队元素："<<endl;
    cin>>x;
    while(x!=-9999){
        Push(Q,x);
        cin>>x;
    }
    cout<<"打印队列元素"<<endl;
    while(!QueueEmpty(Q)){
        Pop(Q,x);
        cout<<x;
    }
}