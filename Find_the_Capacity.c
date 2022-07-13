#include<stdio.h>
int main()
{
    int a,b,c,cap;
    scanf("%d%d%d",&a,&b,&c);
    cap=2*a*b*c*512/1024;
    printf("%dKB",cap);
}