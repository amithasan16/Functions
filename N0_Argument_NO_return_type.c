#include<stdio.h>
int sum(void);
void main()
{
    int s;
    s=sum();
    printf("%d",s);
}
int sum()
{
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    s=a+b;
return s;
}
