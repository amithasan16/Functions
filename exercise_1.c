#include<stdio.h>
int sum(int,int);
int main()
{
int x,y,s;
scanf("%d %d",&x,&y);
s=sum(x,y);
printf("%d",s);
}
int sum(int a,int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}