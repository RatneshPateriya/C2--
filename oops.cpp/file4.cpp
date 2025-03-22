#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std; 
int main(){
     vector<int>arr(5);
     cout<<"enter the number";
     for(int i=0;i<=5;i++){
        cin>>arr[i];
     
    }
    ofstream fout;

    fout.open("z3.text");
    fout<<"intial value"<<endl;
    for(int i=0;i<=5;i++){
        fout<<arr[i]<<" ";
    } 

     ifstream fin;
     fin.open("z3.text");
      string line;
     while(getline(fin,line)){
        cout<<line<<" ";
     }
    cout<<endl;
    
     sort(arr.begin(),arr.end());
     fout<<"sorted value"<<endl;
     for(int i=0;i<5; i++){
        fout<<arr[i];
     }
    fout.close();


}
