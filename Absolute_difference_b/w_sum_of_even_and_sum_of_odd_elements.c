#include<stdio.h>
int main()
{
    int i,n,arr[i],sum=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
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