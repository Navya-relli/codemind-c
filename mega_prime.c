#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,q,r,c=0,cl,p;
    scanf("%d",&n);
    for(a=2;a<=sqrt(n);a++)
    {
        if(n%a==0)
        {
            c=c+1;
            break;
        }
    }
    if(c!=0)
    {
        printf("Not Mega Prime");
    }
    else
    {
        q=n;
        while(q>0)
        {
            r=q%10;
            if(r==2||r==3||r==5||r==7)
            {
                r=r;
            }
            else
            {
                printf("Not Mega Prime");
                p=1;
                break;
            }
            q=q/10;
        }
        if(p!=1)
        {
            printf("Mega Prime");
        }
    }
}