#include<stdio.h>
int main()
{
    int a[500],n,i,p=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        p=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    p++;
                }
            }
        }
        if(p==1)
        {
            continue;
        }
        else
        {
            printf("%d",a[i]);
            break;
        }
    }
}