#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,p,c,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j]&&arr[i]!=-1)
                {
                    c++;
                    arr[j]=-1;
                }
            }
        }
        if(c==p)
        {
            printf("%d ",arr[i]);
            d++;
        }
    }
    if(d==0)
    {
        printf("-1 ");
    }
}