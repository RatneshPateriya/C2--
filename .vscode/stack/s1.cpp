#include<iostream>
#include<stack>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
    public:
    Stack(int s){
        size=s;
        top=-1;
        arr=new int [s];
    }
    void push(int value){
        if(top==size-1){
            cout<<"stack is overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<value<<"pused in the stack"<<endl;
        }
    }
    // pop
    void pop(){
        if(top==-1){
            cout<<"stack is underflow"<<endl;
        }
        else{
            cout<<arr[top]<<endl;
            top--;
        }
    }
    int peak(){
        if(top==1){
            cout<<"stack is empty"<<endl ;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    // empty
    bool Isempty(){
        return top==-1;

    }
    int Issize(){
        return top+1;
    }

};
int main(){
    Stack S(6);
    S.push(6);
    S.push(7);
    S.push(8);
    S.pop();


}