#include<iostream>
using namespace std;
void insertatbegin(int arr[],int n,int insert){
   
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=insert;
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
    int insert;
    cout<<"Enter the element to be inserted at beginning:";
    cin>>insert;
    insertatbegin(arr,n,insert);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}