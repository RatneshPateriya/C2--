#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int ac_no,blance;
    student(string name,int ac_no,int blance){
       this->name=name;
       this->ac_no=ac_no;
       this->blance=blance;

    }
    void deposit(int amount){
        if(amount>0){
            blance+=amount;
            cout<<"deposit the amount"<<blance<<endl;
        }
        else
        throw "to fill the velid amount\n";
    }
    void withdraw(int amount){
        if(amount<blance && amount>0 ){
            blance-=amount;
        }
        else
        throw "your blance is low \n";

    }
};
int main(){
    student s1("ratnesh",2544,6000);
    try{
        s1.deposit(100);
    s1.withdraw(7000);
    }
    catch (const char *e){
        cout<<"expection occured"<<e;
    }

}