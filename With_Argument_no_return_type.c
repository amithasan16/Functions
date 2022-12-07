#include<stdio.h>
void sum(int, int);
void main()
{
int a,b;
scanf("%d %d",&a,&b);
sum(a,b);
}
void sum(int x,int y)
{
int s=0;
s=x+y;
printf("%d",s);
}