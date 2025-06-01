// #include<iostream>
// using namespace std;
// int main(){
//     // heep me value dalo
//     // int *ptr=new int;
//     // *ptr=30;
//     // cout<<*ptr;

//     float *ptr=new float;
//     *ptr=45.6;
//     cout<<*ptr<<endl;

//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     int *p=new int[n];
//     //  value dalo
//     for(int i=0;i<n;i++){
//         p[i]=i+1;
//     }
//     // print karao
//     for(int i=0;i<n;i++){
//         cout<<p[i]<<endl;
//     }
//     delete ptr;
//     delete[]p;

// }

// crate 2d in pointer
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size"<<endl;
    cin>>m>>n;
    int **ptr=new int *[n];
    // crate 2d array
    for(int i=0;i<n;i++){
      ptr[i]=new int [m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ptr[i][j];
        }
    }
    // print 2d array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cout<<ptr[i][j];
        cout<<endl;

    }
    for (int i=0;i<n;i++){
        delete ptr[i];
    }
    delete[]ptr;
}
