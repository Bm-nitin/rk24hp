#include <stdio.h>
struct result
{
    int min,max;
};
int minofarray(int arr[], int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int maxofarray(int arr[], int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    struct result res;
    res.min=minofarray(arr,5);
    res.max=maxofarray(arr,5);
    printf("Minimum: %d\n",res.min);
    printf("Maximum: %d\n",res.max);
    return 0;
}
