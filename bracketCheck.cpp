#include<iostream>
#include "SqStack.cpp"
using namespace std;

bool bracketCheck(char str[],int length){
    SqStack S;
    InitStack(S);
    for(int i=0;i<length;i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            Push(S,str[i]);   //扫描到左括号，入栈
        }else{
            if(StackEmpty(S)) return false;   //扫描到右括号，但栈空
            char topElem;
            Pop(S,topElem);
            if(str[i]==')'&&topElem!='(') return false;
            if(str[i]=='}'&&topElem!='{') return false;
            if(str[i]==']'&&topElem!='[') return false;
        }
    }
    return StackEmpty(S);
}

int main(){
    char str[]={'(',')','{','}','[',']'};
    bool flag=bracketCheck(str,6);
    if(flag) cout<<"匹配成功";
    else cout<<"失败";
    return 1;
}