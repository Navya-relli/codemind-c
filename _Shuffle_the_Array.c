#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,mid=a/2;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0,j=mid; i<mid,j<a; i++,j++)
    {
        printf("%d %d ",arr[i],arr[j]);
    }
    return 0;
}