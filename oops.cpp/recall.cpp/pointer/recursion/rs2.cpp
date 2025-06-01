// resursion in array
// print array
// #include<iostream>
// using namespace std;
// void print(int arr[],int index,int n){
//     if(index==n){
//         return ;
//     }
//     cout<<arr[index];
//     print(arr,index+1,n);

// }
// int main(){
//     int arr[]={2,3,4,5,6};
//     print(arr,0,5);
// }

// reverse
// #include<iostream>
// using namespace std;
// void print(int arr[],int index,int n){
//     if(index==n){
//         return ;
//     }
//     print(arr,index+1,n);
//     cout<<arr[index];
   

// }
// int main(){
//     int arr[]={2,3,4,5,6};
//     print(arr,0,5);
// }


// #include<iostream>
// using namespace std;
// void print(int arr[],int index){
//     if(index==-1){
//         return;
//     }
//     cout<<arr[index];
//     print(arr,index-1);
// }
// int main(){
//     int arr[]={2,4,5,67,5,7};
//     print(arr,5);
// }


// sum of all element in array
// #include <iostream>
// using namespace std;
// int sum(int arr[],int index,int n){
// if(index==n){
//     return 0;
// }
//     return arr[index]+sum(arr,index+1,n);
// }
// int main(){
//     int arr[]={3,5,6,7,3};
//    cout<<sum(arr,0,5);
// }

// minim elemen of array
// #include<iostream>
// using namespace std;

// int minmum(int arr[],int index,int n){{
//     if(index==n-1){
//         return arr[index];
//     }
// }
//     return min(arr[index],minmum(arr,index+1,n));
// }
// int main(){
//     int arr[]={4,65,7,2,1};
//     cout<<minmum(arr,0,5);
// }