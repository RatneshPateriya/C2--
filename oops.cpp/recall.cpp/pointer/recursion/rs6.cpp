#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
int pos=start;
for(int i=start;i<=end;i++){
    if(arr[i]<=arr[end]){
        swap(arr[i],arr[pos]);
        pos++;
    }
}
  return  pos-1;
}
void margesort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int povit=partition(arr,start,end);
    // left ke liye
    margesort(arr,start,povit-1);
    margesort(arr,povit+1,end);

}
int main(){
    int arr[]={1,3,4,2,4,5,6,7};
    
    margesort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    
}