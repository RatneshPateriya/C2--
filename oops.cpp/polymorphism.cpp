
// function overloding
// #include<iostream>
// using namespace std;
// class Area{
//     public:
//     int calculateArea(int r){
//         return 3.14*r*r;
//     }
//     int calculateArea(int l,int b){
//         return l*b;
//     }
// };
// int main(){
//     Area A1,A2;
//     cout<<A1.calculateArea(5)<<endl;
//     cout<<A2.calculateArea(4,5);

// }


// operator overloding
// #include<iostream>
// using namespace std;
// class complex{
//     int rel,img;
//     public:
//     complex(){

//     };
//     complex(int rel,int img){
//         this->rel=rel;
//         this->img=img;
//     }
//     void display(){
//         cout<<rel<<"+i"<<img;
//     }
//     complex operator +(complex &c){

//         complex ans;
//         ans.rel=rel+c.rel;
//         ans.img=img+c.img;
//         return ans;


//     }

// };
// int main(){
//     complex c1(3,4);
//     complex c2(6,4);
//     complex c3=c1+c2;
//     c3.display();


// }


//  virtual function
// #include<iostream>
// #include<vector>
// using namespace std;
// class Animal{
//  public:
//    virtual void speak(){
//     cout<<"buh buh"<<endl;
//  }
// };
// class dog:public Animal{
// public:
// void speak(){
//    cout<<"bark"<<endl;
// }
// };
// class cat:public Animal{
//     public:
//     void speak(){
//        cout<<"mou mou"<<endl;
//     }
//     };

// int main(){
//      Animal *p;
//      p= new dog();
//      p->speak();
//      Animal *p;
//     vector<Animal*>animals;
//     animals.push_back(new dog());
//     animals.push_back(new Animal());
//     animals.push_back(new cat());
//     animals.push_back(new dog());
//     animals.push_back(new Animal());
//     animals.push_back(new cat());
//     for(int i=0;i<animals.size();i++){
//         p=animals[i];
//         p->speak();
//     }


// }


// pure virtual function
#include<iostream>
#include<vector>
using namespace std;
class Animal{
 public:
   virtual void speak()=0;//abstract class
    
};
class dog:public Animal{
public:
void speak(){
   cout<<"bark"<<endl;
}
};
class cat:public Animal{
    public:
    void speak(){
       cout<<"mou mou"<<endl;
    }
    };

int main(){
    //  Animal *p;
    //  p= new dog();
    //  p->speak();
     Animal *p;
    vector<Animal*>animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new dog());
    animals.push_back(new cat());
    for(int i=0;i<animals.size();i++){
        p=animals[i];
        p->speak();
    }
}