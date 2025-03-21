// #include<iostream>
// using namespace std;
// class student{
//     void sprint(){
//         cout<<"i am student";
//     }
// };
// class boy{
//     void boyprint(){
//         cout<<"i am boy";
//     }
// };
// class girls{
//     public:
//     void girlprint(){
//         cout<<"i am girls";
//     }
// };
// class male:public student,public boy{
//     public:
//     void maleprint(){
//         cout<<"i am male";
//     }
// };
// class female:public student,public girls{
//     public:
//     void femaleprint(){
//         cout<<"i am female";
//     }
// };
// int main(){
//     female f1;
//     f1.girlprint();
//     cout<<endl;
//     f1.femaleprint();

// }

#include<iostream>
using namespace std;
class human{
    public:
    string name;
};
class engineer:public virtual human{
    protected:
    string specilization;
    
};
class youtuber :public virtual human{
    protected:
    int suscriber;
    
};
class codeteacher:public youtuber,public engineer{
    protected:
    int selary;
    public:
    codeteacher(string name,int suscriber,string sepcilization,int selary){
        this->name=name;
        this->suscriber=suscriber;
        this->specilization=sepcilization;
        this->selary=selary;
    }
    void display(){
        cout<<name<<" "<<suscriber<<" "<< specilization<<" "<< selary<<endl;
    }



};
int main(){
 codeteacher c1("ratnesh",40000000,"data_science",15000000);
 c1.display();
 
}
