#include<stdio.h>
int main()
{
    int n,k,q;
    scanf("%d%d%d",&n,&k,&q);
    int arr[n],quer[q];
    int i,j;
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<q; i++)
    {
        scanf("%d",&quer[i]);
    }
    for (i=0; i<k; i++)
    {
        int temp=arr[0];
        arr[0]=arr[n-1];
        for (j=1; j<n; j++)
        {
            int last=arr[j];
            arr[j]=temp;
            temp=last;
        }
    }
    for (i=0; i<q; i++)
    {
        printf("%d
",arr[quer[i]]);
    }
    return 0;
}