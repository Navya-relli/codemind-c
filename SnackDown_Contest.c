#include<stdio.h>
int count( int arr[],int a)
{
    int i,j,c=0;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j] && arr[i]!=-1)
                {
                    arr[j]=-1;
                }
            }
        }
    }
    for (i=0; i<a; i++)
    {
        if (arr[i]!=-1)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    for (n=0; n<t; n++)
    {
        int k;
        scanf("%d",&k);
        int a;
        scanf("%d",&a);
        int arr[a],i;
        for (i=0; i<a; i++)
        {
            scanf("%d",&arr[i]);
        }
        int b;
        scanf("%d",&b);
        int brr[b],j;
        for (j=0; j<b; j++)
        {
            scanf("%d",&brr[j]);
        }
        int res[a+b],p=a;
        for (i=0; i<a; i++)
        {
            res[i]=arr[i];
        }
        for (j=0; j<b; j++)
        {
            res[p]=brr[j];
            p++;
        }
        int re=count(res,a+b);
        if (re>=k)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
    return 0;
}