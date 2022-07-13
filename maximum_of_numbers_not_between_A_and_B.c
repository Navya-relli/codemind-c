#include<stdio.h>
int main()
{
    int a[100],i,n,b,c,m=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(a[i]<b||a[i]>c)
        {
            if(m<a[i])
            {
                m=a[i];
            }
        }
    }
    printf("%d",m);
}