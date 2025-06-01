// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,4,5,6};
//     int *ptr  = arr;

    // cout<<arr<<endl;
    // cout<<ptr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*ptr<<endl;
    // cout<<*arr+0<<endl;
    // cout<<*(arr+0)<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr+i<<endl;
    // }
    // for(int i=0;i<5;i++){
    //     cout<<*(arr+i)<<endl;
    // }

    // for( int i=0;i<5;i++){
    //     cout<<ptr[i]<<endl;
    // }
    // airthmetic operation
    // for(int i=0;i<5;i++){
    //     cout<<ptr<<endl;
    //     ptr++;
    // }
    // cout<<endl;
    // for(int i=5;i>0;i--){
    //     cout<<ptr<<endl;
    //     ptr--;
    // }
//     ptr=ptr+3;
//     for(int i=0;i<5;i++){
//         cout<<ptr[i]<<endl;
//     }
// }




// #include<iostream>
// using namespace std;
// void  dob(int *ptr){
//     for(int i=0;i<5;i++){
//        ptr[i]=2*ptr[i];
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     dob(arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }
// }

#include<iostream> 
using namespace std;
void swaping (int p1,int p2){
    int temp=p1;
    p1=p2;
    p2=temp;
}

int main(){
    int first=10,second=20;
    swaping(first,second);
    cout<<first<<" "<<second;

}

// swap element pass by pointer
// #include<iostream> 
// using namespace std;
// void swaping (int *p1,int *p2){
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
// }

// int main(){
//     int first=10,second=20;
//     swaping(&first,&second);
//     cout<<first<<" "<<second;

// }
// pass py refrance varable
// #include<iostream> 
// using namespace std;
// void swaping (int &p1,int &p2){
//     int temp=p1;
//     p1=p2;
//     p2=temp;
// }

// int main(){
//     int first=10,second=20;
//     swaping(first,second);
//     cout<<first<<" "<<second;

// }

#include<iostream>
#include<vector>
using namespace std;
int a(vector<int >&v1){
    for(int i=0;i<5;i++){
        v1[i]=10;
    }
}
int main(){
    vector<int>v(5,0);
    a(v);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

}