#include<stdio.h>
int main()
{
    int n,l;
    scanf("%d%d",&n,&l);
    int arr[n],i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,skip=0;
    for (i=0; i<n; i++)
    {
        if (arr[i]<=l)
        {
            c++;
        }
        if (arr[i]>l)
        {
            skip++;
        }
        if (skip<=1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("%d",c);
    return 0;
}