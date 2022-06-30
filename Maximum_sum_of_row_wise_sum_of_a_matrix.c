#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b],i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int rs=0,max=0;
    for (i=0; i<a; i++)
    {
        rs=0;
        for (j=0;j<b;j++)
        {
            rs+=arr[i][j];
        }
        if (rs>max)
        {
            max=rs;
        }
    }
    printf("%d",max);
    return 0;
}