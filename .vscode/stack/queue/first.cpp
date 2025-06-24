// #include<iostream>
// #include<queue>
// using namespace std;
// class Queue{
//     public:
//     int *arr;
//     int size;
//     int front ,rear;
//     Queue(int n){
         
//         arr=new int [n];
//         n=size;
//         front =-1;
//         rear=-1;
//     }
//     // queue is empty
//     bool isEmpty(){
//         return front==-1;
//     }
//     // queue is full
//     bool isfull(){
//         return(rear)%size==front;
//     }
//     // push element in the queue
//     void push(int x){
//         if(isEmpty()){
//             arr[0]=x;
//             return ;
//         }
//         else if(isfull()){
//             cout<<"queue is over flow";
//             return;
//         }
//         else{
//          rear=(rear+1)%size;
//          arr[rear]=x;
//          cout<<"pussed "<<x<<"int to the queue"<<endl;
//         }
//     }
//     // pop element in the queue
//     void pop(){
//         if(isEmpty()){
//             cout<<"queue is underflow"<<endl;
//             return;
//         }
//         else{

//             if(front==rear){
//             cout<<"popped"<<arr[front]<<"in to the queue"<<endl;
//             front=rear=-1;
//         }
//         else{
//             cout<<"popped"<<arr[front]<<"in to the queue"<<endl;
//             front =(front+1)%size;

//         }
//      }


//     }
//     int start(){
//         if(isEmpty()){
//             cout<<"queue is empty"<<endl;
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }



// };
// int main(){
//     Queue q(5);
//     q.push(15);
//     q.push(25);
//     q.push(53);  
// }


#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<int>q;
    q.push(3);
    q.push(13);
    q.push(23);
    q.push(33);
    q.push(34);
    int n=q.size();
    while(n--){
        cout<<q.front()<<endl;
        q.push(q.front());
        q.pop();
    }
    cout<<q.size();

 


}