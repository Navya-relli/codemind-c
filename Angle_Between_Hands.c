#include<stdio.h>
int main()
{
    char str[10];
    scanf("%s",str);
    int i,h=0,m=0;
    float a;
    h=(str[0]-48)*10+(str[1]-48);
    m=(str[3]-48)*10+(str[4]-48);
    if(m%2==0)
    {
        a=30*(h*1.0)-((11*m*1.0)/2);
        if(a<0)
        {
            a+=360;
        }
        if(a>180)
        {
            a=360-a;
        }
        printf("%.1f",a);
    }
    else
    {
        a=30*(h*1.0)-(5.5*m*1.0);
        if(a<0)
        {
            a+=360;
        }
        if(a>180)
        {
            a=360-a;
        }
        printf("%.1f",a);
    }
    return 0;
}