#include<stdio.h>
int main()
{
    int arr[100],n,sum=0,c=0;
    int a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    a=(sum/n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a)
        c++;
    }
    printf("%d",c);
}