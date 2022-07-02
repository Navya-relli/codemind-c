#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int val=0;
    int j=a-1;
    for (i=0; i<a; i++)
    {
        val+=arr[i]*pow(2,j);
        j--;
    }
    printf("%d",val);
    return 0;
}