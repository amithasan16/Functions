#include<stdio.h>
int max_num(int,int,int);
int main()
{
int a,b,c,s,n,i;
scanf("%d",&n);//Test case
for(i=0;i<n;i++)
{
scanf("%d %d %d",&a,&b,&c);
s=max_num(a,b,c);
}
}
int max_num(int x,int y,int z)
{
    if(x>y && x>z)
    {
        printf("%d",x);
    }
    else if(y>x && y>z)
    {
        printf("%d",y);
    }
    else{
        printf("%d",z);
    }
}