// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *ptr=&a;
//     // add print
//     cout<<ptr<<endl;
//     // value print
//     cout<<*ptr;
// }

#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    int b=40;
    ptr=&b;
    cout<<ptr<<endl;
    cout<<*ptr;
}