#include<stdio.h>
int main()
{
    int a[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    if(a[i]>=n)
    {
        c++;
    }
    }
    if(c>0)
    {
        printf("NO");
    }
    else
    {
        printf("YES"); 
    }
}