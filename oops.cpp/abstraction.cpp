//  display only essential information diding the details
#include<iostream>
using namespace std;
class customer{
    string name;
    int age;
    int blance;
    
    public:
    customer(string name,int age,int blance){
        this->name=name;
        this->age=age;
        this->blance=blance;

    }
    void deposite(int amount){
        if(amount>0){
            blance+=amount;
        }

    }
    void display(){
        cout<<name<<" "<<age<<" "<<blance;
    }
};
int main(){
    customer A1("ratnesh",12,4000);
    A1.display();
    


}