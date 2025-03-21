// default constructor
// #include <iostream>
// using namespace std;
//  class customer{
//     string name;
//     int ac_no;
//     int blance;
//     public:
//     customer(){
// //   cout<<"hello ji";
//     name="ratnesh";
//     ac_no=123532;
//     blance=99999;
//     }

//  void display(){

//     cout<<name<<" "<< ac_no<<" "<<blance;
//  }
// }; 
 
//  int main(){
//     customer A1;
//     A1.display();
//  }

//  peramitarige constructor
#include<iostream>
using namespace std;
class customer{
    string name ;
    int ac_no;
    int blance;
    int *roi;
public:
customer(string s,int a,int b){
    name=s;
    ac_no=a;
    blance=b;
    roi=new int[45];
}
// default construcor
customer(string c,int d){    
name=c;
ac_no=d;
}
// customer(string name , int ac_no, int blance){
//     this->name=name;
//     this->ac_no=ac_no;
//     this->blance=blance;

// }

//  inline customer (string a,int b,int c):name(a),ac_no(b),blance(c){

//  }


void display(){
    cout<<name<<" "<<ac_no<<" "<<blance;
}

};
int main(){
    // customer A1("ratnesh",12343,9999993);
    // A1.display();
    // cout<<endl;
    customer A2("rahul",657453);
    A2.display();
    cout<<endl;
    customer A3("brajendra",467375,8902388);
    A3.display();
    cout<<endl;
    customer A4(A3);
    A4.display();
    


}