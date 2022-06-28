#include<stdio.h>
int main()
{
    int max=0,n,a[100],p,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+p>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}