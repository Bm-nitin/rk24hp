#include <stdio.h>
int* insert(int arr[],int size, int key, int idx){
    int newArr[]={1,2,3,4,5,6,7};
    int* ptr=newArr;
    return ptr;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *ptr=insert(arr,size,3,10);
    for(int i=0;i<size+1;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}