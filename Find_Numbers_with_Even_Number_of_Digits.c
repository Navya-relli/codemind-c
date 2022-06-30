#include<stdio.h>
int main()
{
    int n,c=0,k=0;
    scanf("%d",&n);
    long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        c=0;
        while(a[j]>0)
        {
            c++;
            a[j]=a[j]/10;
        }
        if(c%2==0)
        {
            k++;
        }
    }
    printf("%d",k);
}