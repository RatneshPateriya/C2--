// singal lavel 
// #include<iostream>
// using namespace std;

// class Human{
//     protected:

//     string name;
//     public:
//     Human(){
//         cout<<"emter the name";
//     }

// };
// class student :public Human{
//     int age;
//     public:
//    ~student(){
//         cout<<"enter the age";
//     }
    
// };
// int main(){
//     student A1;

// }

// #include<iostream>
// using namespace std;

// class Human{
//     protected:

//     string name;

// };
// class student :public Human{
//     int age;
//     public:
//    student(string name,int age){
//     this->name=name;
//     this->age=age;
        
//     }
//     void display(){
//         cout<<name<< " "<<age;
//     }
    
// };
// int main(){
//     student A1("ratnesh" ,21);
// A1.display();

// }

// multilavel 

// #include<iostream>
// using namespace std;
// class person{
//     protected:
//     string name;
//     public:
//     void name(){
//         cout<<"name is"<<name;
//     }

// };
// class Employ: public person{
// public:
// int selary;
// public:
// void selary(){
//     cout<<"salery is"<<selary;
// };

// class Manager: public Employ{
//     public:
//     string department;
//     public:

//     Manager(string name, int selary, string department){
//         this->name=name;
//         this->selary=selary;
//         this->department=department;
//     };
//     void department(){
//         cout<<"department is"<<department;
//     }


// };


// }
// int main(){
//     Manager M1("rantnesh",439392,"development")

// }


// multiple

// #include<iostream>
// using namespace std;
// class engineer{
//     protected:
//     string specilization;
//     public :
//     void work(){
//         cout<< "i have specilixation"<<specilization<<endl;
//     }
// };
// class youtuber{
//     protected:
//     int suscriber;
//     public:
//     void contrntcrater(){
//         cout<<"i have a follower"<<suscriber<<endl;
//     }
// };
// class codeteacher:public youtuber,public engineer{
//     string name;
//     public:
//     codeteacher(string name,int suscriber,string sepcilization){
//         this->name=name;
//         this->suscriber=suscriber;
//         this->specilization=sepcilization;
//     }
//     void showcase(){
//         cout<<"name is"<<name <<endl;
//         work();
//         contrntcrater();
//     }


// };
// int main(){
//  codeteacher c1("ratnesh",40000000,"data_science");
//  c1.showcase();
// }


// hierarchical

#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    Human(){

    };
};
class employe:public Human{
    protected:
    int age;
    public:
    employe(string name,int age){
        this->name=name;
        this->age=age;
    }
     void display(){
        cout<<name<<age;
     }
};
class teacher: public Human{
    int selary;
    public:
    teacher(string name,int age,int selary){
        this->name=name;
        this->selary=selary;
    }
    void display(){
        cout<<name<<" " <<selary;
    }
};
int main(){
    teacher t1("ratnesh",30,399999999);
    t1.display();

};


