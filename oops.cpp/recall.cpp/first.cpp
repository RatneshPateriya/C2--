#include<iostream>
using namespace std;
class complex{
    
    int rel;
    int img;
    public:
    complex(){

    };
    complex(int rel,int img){
        this->rel=rel;
        this->img=img;
    }
        void display(){
         cout<<rel<<" +i"<<img;
        };
        complex operator +(complex &c){
           complex ans;
           ans.rel=rel+c.rel;
           ans.img=img+c.img;
           return ans;
        }
        
    
};

int main(){
    complex c1(3,5);
        complex c2(8,4);
        complex c3=c1+c2;
        c3.display();
    

}