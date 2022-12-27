#include<stdio.h>
int main()
{
    int n,i,k,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("%d",i);
            x=1;
            break;
        }
    }
    if(x==0)
    printf("-1");
}