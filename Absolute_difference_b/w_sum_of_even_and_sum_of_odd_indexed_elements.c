#include<stdio.h>
int main()
{
    int i,sum=0,s,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+arr[i];
        }
        else
        {
            s=s+arr[i];
        }
    }
    if(s>sum)
    printf("%d",s-sum);
    else
    printf("%d",sum-s);
}