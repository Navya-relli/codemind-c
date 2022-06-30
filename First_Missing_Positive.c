#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;;j++)
    {
        k=1;
        for(i=0;i<n;i++)
        {
            if(a[i]==j)
            {
                k=0;
                break;
            }
        }
        if(k==1)
        {
            printf("%d",j);
            break;
        }
    }
}