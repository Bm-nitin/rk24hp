#include <stdio.h>
void papattern(int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    int x;
    scanf("%d",&x);
    papattern(x);
    return 0;
    
}