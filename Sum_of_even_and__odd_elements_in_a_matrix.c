#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m],i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int se=0,so=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (arr[i][j]%2==0)
            {
                se+=arr[i][j];
            }
            else
            {
                so+=arr[i][j];
            }
        }
    }
    printf("%d %d",se,so);
    return 0;
}