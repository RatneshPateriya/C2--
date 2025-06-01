// #include<iostream>
// using namespace std;
// void num(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     num(n-1);
// }
// int main(){
//     int n=4;
//     num(n);
// }


// even number
// #include<iostream>
// using namespace std;
// void even(int n){
//     if(n==2){
//         cout<<2;
//         return ;
//     }
//     cout<<n<<endl;
//     even(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the num";
//     cin>>n;
//     even(n);
// }


// odd number
// #include<iostream>
// using namespace std;
// void odd(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     odd(n-2);

// }
// int main(){
// int n=11;
// // cout<<"enter the number ";
// // cin>>n;
// odd(n);
// }

// print 1 to n
// #include<iostream>
// using namespace std;
// void print(int num,int N){
//     if(num==N){
//         cout<<num;
//         return;
//     }
//     cout<<num<<endl;
//     print(num+1,N);
// }
// int main(){
//     int N;
//     cin>>N;
//     print(1,N);

// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==1){
//         cout<<1<<endl; 
//         return;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     print(n);

// }
// even num
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==2){
//         cout<<2<<endl; 
//         return;
//     }
//     print(n-2);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     print(n);

// }

// factorial of num
// #include<iostream>
// int fact(int n){
//     if(n==0 || n==1){
//         return 1;

//     }
//    return (n*(n-1));
// }
// using namespace std;
// int main(){
//     int n=5;
//     cout<<fact(n);
// }

// #include <iostream>
// using namespace std;
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n=5;
//     cout<<sum(n);
// }


// power of 2
// #include<iostream>
// using namespace std;
// int pow(int num,int n){
//     if(n==0){
//         return 1;
//     }
//     return num*pow(num,n-1);
// }
// int main(){
//     int n=3;
//     cout<<pow(2,n);
// }

//  squre sum of n natural num
#include<iostream>
using namespace std;
int sqrtsum(int n){
    if(n==1){
        return 1;
    }
    return n*n+sqrtsum(n-1);
}
int main(){
    int n=5;
    cout <<sqrtsum(n);

}