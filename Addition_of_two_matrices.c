#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int mat1[a][a],mat2[a][a],i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    int diff[a][a];
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            int d=mat1[i][j]+mat2[i][j];
            if (d<0)
            {
                d*=-1;
            }
            diff[i][j]=d;
        }
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            printf("%d",diff[i][j]);
            if (j<a-1)
            {
                printf(" ");
            }
        }
        printf("
");
    }
    return 0;
}