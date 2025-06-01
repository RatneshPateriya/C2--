// marge short
#include<iostream>
#include<vector>
using namespace std;
void marge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while (left<=mid && right<=end)
    {
       if(arr[left]<=arr[right]) {
        temp[index]=arr[left];
        index++;
        left++;
       }
       else{
        temp[right]=arr[right];
        index++;
        right++;
       }
    }
    // bache uhe left array ke liye
    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
    }
    // bache uhe right array e liye
    while(right<=end){
        temp[index]=arr[right];
        index++;
        right++;
    }
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++;
        index++;
    } 
    
}
void margesort(int arr[],int start,int end){
    // base case
    if(start==end){
        return ;
    }
    int mid=start+(end-start)/2;
    // left ke liye
    margesort(arr,start,mid);
    // right ke liye
    margesort(arr,mid+1,end);
    marge(arr,start,mid,end);
}
int main(){
    int arr[]={4,2,6,7,3,1,9,2};
    margesort(arr,0,8);
    for(int i=0;i<9;i++)
        cout<<arr[i]<<" ";
    
}