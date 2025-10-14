#include <stdio.h>
int incrementeachelementofarray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]+1;
    }
    return 0;
}

int main(){
    int arr[10];
    printf("ENTER NUMBERS: \n");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    incrementeachelementofarray(&arr[0],10);
    for(int i=0;i<10;i++)    
    {
        printf("%d ",arr[i]);
    }

    return 0;
}