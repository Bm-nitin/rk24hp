#include<iostream>
using namespace std;
void insertatend(int arr[],int n,int inseret){
    arr[n]=inseret;
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
    int inseret;
    cout<<"Enter the element to be inserted at end:";
    cin>>inseret;
    insertatend(arr,n,inseret);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}