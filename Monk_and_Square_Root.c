#include<stdio.h>
int main()
{
    int c=0,j,n;
    long long int a,b,i;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%lld%lld",&a,&b);
        c=0;
        i=0;
        while(i<b)
        {
            if((i*i)%b==a)
            {
                c++;
                printf("%lld
",i);
                break;
            }
            i++;
        }
        if(c==0)
        {
            printf("-1
");
        }
    }
}