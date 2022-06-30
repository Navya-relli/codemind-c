#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    for(int j=0;j<b;j++)
    {
        int s=0;
        for(int i=0;i<a;i++)
        {
            s+=arr[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    printf("%d",max);
}