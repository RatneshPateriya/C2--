#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("z1.text");
    fout<<"hello ratnesh"<<endl;
    fout<<"hello pateriya"<<endl;
    fout<<"hello india"<<endl;
    ifstream fin;
    fin.open("z1.text");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
fin.close();
    
}