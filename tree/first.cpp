// #include<iostream>
// #include<queue>
// using namespace std;
//  class Node{
//     public:
//     int data;
//     Node *left,*right;
//     Node(int value){
//         data = value;
//         left = right=NULL;

//     }
//  };
//  int main(){
//     int x;
//     cout<<"enter the root element";
//     cin>>x;
//     queue<Node*>q;
//     int first,second;
//     Node *root=new Node(x);
//     q.push(root);
//     while(!q.empty()){
//         Node* temp=q.front();
//         q.pop();
    
//      cout<<"enter the left child of"<<temp->data<<":";
//        cin>>first;
//        if(first!=-1){
//         temp->left=new Node(first);
//         q.push(temp->left);
//        }
//        cout<<"enter the right child of"<<temp->data;
//        cin>>second;
//        if(second!=-1){
//         temp->right=new Node(second);
//         q.push(temp->right);

//        }


//     }
    

//  }
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp = new Node(x);
    // left node
    cout<<"enter the left Node"<< x<<" :";
    temp->left=BinaryTree();
    cout<<"enter the right Node"<< x<<" :";
    temp->right=BinaryTree();
    return temp;
}

int main() {
    // Write C++ code here
    cout<<"enter the root node";
    Node* root;
    root=BinaryTree();

    return 0;
}