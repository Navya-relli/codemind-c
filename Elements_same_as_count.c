#include<stdio.h>
int main()
{
    int n,i,arr[100],d=0,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
        if(arr[i]==c)
        {
            d++;
            printf("%d ",arr[i]);
        }
    }
    if(d==0)
    {
        printf("-1");
    }
}