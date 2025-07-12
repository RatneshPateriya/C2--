#include<iostream>
using namespace std;
class Node{
    pubilc:
       int data;
    Node *left,*right;
    Node(value){
        left=right=NULL;
        data=value;
    }

};
Node *binaryTree(){
    int x;
    
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node * temp=new Node(x);
    // left ke liye
    cout<<"enter the left Node"<<" :";
    left->temp=binaryTree()
    // right ke liye
    cout<<"enter the right node"<<" :";
    right->temp=binaryTree();
    return temp;
}
int main(){
    cout<<"enter the root node";
    Node * root;
    root=binaryTree();

}