#include<stdio.h>
int main()
{
    int n,r=0,q,p,d=0,rev=0;
    scanf("%d",&n);
    while(n)
    {
        q=n%10;
        n=n/10;
        r=r*10+q;
        
    }
    while(r)
    {
        p=r%10;
        r=r/10;
        if(d<1)
        {
            if(p==6)
            {
                p=9;
                d=1;
                
            }
        }
        rev=rev*10+p;
    }
    printf("%d",rev);
}