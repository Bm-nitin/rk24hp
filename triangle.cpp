#include<iostream>
using namespace std;
void lowertriangle(int x){
    char ch='A';
    for(int i=0;i<x;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}
int main(){
    int x;
    cin>>x;
    lowertriangle(x);
    return 0;
    
}