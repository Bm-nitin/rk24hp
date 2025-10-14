#include<iostream>
using namespace std;
void insertatmid(int arr[],int n,int insert,int idx){
   
    for(int i=n-1;i>=idx;i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=insert;
}
int main(){
    int n;
    cout<<"Enter the size of array:" ;
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int insert,idx;
    cout<<"Enter the element to be inserted at middle:";
    cin>>insert;
    cout<<"Enter the index at which element to be inserted:";
    cin>>idx;
    insertatmid(arr,n,insert,idx);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}