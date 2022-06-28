#include<stdio.h>
int self(int n)
{
    int d=0,c=0,p=n,q;
    while(n)
    {
        q=n%10;
        n=n/10;
        c++;
        if(q==0)
        {
            return 0;
        }
        else if(p%q==0)
        {
            d++;
        }
    }
    if(c==d)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}