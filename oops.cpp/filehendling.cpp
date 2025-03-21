// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// { 
//     //file ko open karna
//     ofstream fout;
//     fout.open("zoom.text");//crate kar denga fir open kar denga
//     //write kar sakta hu
//     fout<<" hello ratnesh";
//     fout.close();//resourse relese kar pauon

// }


// read file
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ifstream fin;
//     fin.open("zoom.txt");
//     char c;
//     c=fin.get();
//     while(!fin.eof()){
//         cout<<c;
//         c=fin.get();
//     };
//     fin.close();
// }

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
    for(int i=0;i<5;i++){
        fout<<arr[i];
    }
    fout.close();

}