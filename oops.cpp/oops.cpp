// static data member
// #include<iostream>
// using namespace std;
// class customer{
//     string name;
//     int ac_no;
//     int blance;
//     public:
//     static int total_customer;
    
//     customer(string name,int ac_no, int blance){
//         this->name=name;
//         this->ac_no=ac_no;
//         this->blance=blance;
//         total_customer ++;
//     }
//     void display(){
//         cout<<name<<" "<<ac_no<<" "<<blance;
//         cout<<endl;
    
//     }
//     void total(){
//         cout<<total_customer;
//     }
    
// };
// int customer:: total_customer;

// int main(){
//     customer A1("ratnesh",235,14056);
//     A1.display();
//     customer A2("rahul",235,14056);
//     customer::total_customer=7;
//     A1.total();


// }

//  static member  function
#include<iostream>
using namespace std;
class customer{
    string name;
    int ac_no;
    int blance;
    static int total_customer;
    static int total_blance;
    public:
    
    customer(string name,int ac_no, int blance){
        this->name=name;
        this->ac_no=ac_no;
        this->blance=blance;
        total_customer ++;
        total_blance+=blance;
    }
    static void acceStatic(){
        cout<<total_customer<<endl;
        cout<<total_blance<<endl;
    }
    void display(){
        cout<<name<<" "<<ac_no<<" "<<blance;
        cout<<endl;
    
    }
    void display_total(){
        cout<<total_customer;
    }
    void diposit(int amount){
        if(amount>0){
            blance+=amount;
            total_blance+=amount;
        }
    }
    void withdraw(int amount){
        if(amount<=blance && amount>0){
            blance-=amount;
            total_blance-=amount;
        }
    }
    
};
int customer:: total_customer;
int customer:: total_blance;

int main(){
    customer A1("ratnesh",235,14056);
    A1.display();
    customer A2("rahul",235,1456);
    A2.display(); 
    customer::acceStatic();
    A1.display_total();


}