#include<stdio.h>
int  main()
{
    int a[100],n,i,avg=0,count=0,av;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        avg=(avg+a[i]);
    }
    av=avg/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=av)
        {
            count++;
        }
    }
    printf("%d",count);
}