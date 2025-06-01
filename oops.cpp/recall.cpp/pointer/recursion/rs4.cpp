
// linear search
// #include<iostream>
// using namespace std;
// bool linear(int arr[],int x,int index,int n){
    // base case  
//     if(index==n){
//         return 0;
//     }
//     if(arr[index]==x){
//         return 1;
//     }
//     return linear(arr,x,index+1,n);
// }
// int main(){
//     int arr[]={2,3,4,5,6};
//     int x=3;
//     cout<<linear(arr,x,0,5);
// }


// binary search 
#include<iostream>
using namespace std;
bool binarysearch(int arr[],int x,int start,int end){
    // base case
    if(start>end){
        return 0;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==x){
        return 1;
    }
    else if(start<x){
        return binarysearch(arr,x,mid+1,end);
    }
    else{
        return binarysearch(arr,x,start,mid-1);
    } 
    
}
int main(){
    int arr[]={2,3,5,6,7,8};
    int x=4;
    cout<<binarysearch(arr,x,0,5);
}