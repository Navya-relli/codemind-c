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
    int rs=0;
    for (j=0; j<b; j++)
    {
        rs=0;
        for (i=0; i<a; i++)
        {
            rs+=arr[i][j];
        }
        printf("%d ",rs);
    }
    return 0;
}