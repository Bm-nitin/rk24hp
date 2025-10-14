#include<iostream>
using namespace std;
void uppertirangle(int n){
    char ch='A';
    for(int i=0;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}
int main(){
    int x;
    cin>>x;
    uppertirangle(x);
}