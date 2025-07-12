// to check length of linked list

#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next = next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;


    }

};
    Node* convertArr2LL(vector<int>& arr){
        Node* head=new Node (arr[3]);
        Node* mover=head;

        int n=arr.size();
        for(int i=0;i<n;i++){
            Node* temp=new Node(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;

    }
    int lengthofLL(Node* head){
        int cnt=0;
        Node*temp=head;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }



int main(){
    vector<int>arr={1,3,4,5,7};
    Node* head= convertArr2LL(arr);     
    cout<<lengthofLL(head);

}