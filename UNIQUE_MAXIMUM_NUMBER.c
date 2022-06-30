#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j,max=0,flag=0,c=0;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        flag=1;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                {
                    flag=0;
                    break;
                }
            }
        }
        if (flag==1)
        {
            if (max<arr[i])
            {
                max=arr[i];
                c=1;
            }
        }
    }
    if (c==0)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",max);
    }
    return 0;
}