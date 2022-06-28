#include<stdio.h>
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 1;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            if(prime(i))
            {
                d++;
            }
        }
    }
    printf("%d",d);
}