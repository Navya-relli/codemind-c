#include<stdio.h>
int main()
{
    int arr[100],a=0,b=1,c;
    for(int i=0;i<100;i++)
    {
        arr[i]=a;
        c=a+b;
        a=b;
        b=c;
    }
    int n;
    scanf("%d",&n);
    int co=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==n)
        {
            co=1;
            break;
        }
    }
    if(co==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}