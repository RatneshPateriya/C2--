// check palindrom
// #include<iostream>
// using namespace std;
// int chechpal(string str,int start,int end){
//     if(start>=end){
//     return 1;
//     }
//     if(str[start]!=str[end]){
//         return 0;
//     }
//     return chechpal(str,start+1,end-1);
// }
// int main(){
//     string str="naman";
//     cout<<chechpal(str,0,4);
// }

// count vowels
// #include<iostream>
// using namespace std;
// int count(string str,int index){
//     if(index==-1){
//         return 0;
//     }
//     if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u'){
//         return 1+count(str,index-1);
//     }
//     return count(str,index-1);
// }
// int main(){
//     string str="ratnesh";
//     cout<<count(str,6)<<endl;
// }