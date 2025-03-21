#include<iostream>
using namespace std;
class customer{
    string name;
    int  ac_no;
    int blance;
    int age;
    public:
    customer(string name,int ac_no,int blance,int age){
        this->name=name;
        this->ac_no=ac_no;
        this->blance=blance;
        this->age=age;
    }
    void diposite(int amount){
        if(amount>0){
            blance+=amount;
        }

    }
    void withdraw(int amount){
        if(amount<blance && amount>0){
            blance-=amount;
        }
    }
    void updateage(int age){
        if(age>0 && age<100){
            this->age=age;

        }
        else{
            cout<<"invalid age";
        }
    }
    void display(){
        cout<<name<<" "<< ac_no<<" "<< blance<<" "<<age<<endl;
    }
    
};
int main(){
    customer A1("ratnesh",123,748494,21);
    A1.display();
    A1.updateage(43);
    A1.diposite(500);
    A1.display();



}