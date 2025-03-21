#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5);
    cout<<"enter the num";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    ofstream fout;
    fout.open("zero.text");
    fout<<"original data\n";
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    };
    fout<<"shorted data\n";
    // sort(arr.begin(),arr.end());
    for(int i=0; i<5 ;i++){
        fout<<arr[i];
    };

    fout.close();

}