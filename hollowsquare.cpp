#include<iostream>
using namespace std;
void hollowsquare(int m){
    char ch='A';
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==m-1 || j==0 || j==m-1){
                cout<<ch<<" ";
                ch++;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}

int main(){
    int m;
    cin>>m;
    hollowsquare(m);
    return 0;
}