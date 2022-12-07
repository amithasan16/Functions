#include<stdio.h>
int gcd(int,int);
int lcm(int,int);
int main()
{
    int x,s,y;
    scanf("%d %d",&x,&y);
    s=gcd(x,y);

}
int gcd(int x,int y){
if(x%y==0 && y%y==0)
{
printf("GCD is %d",y);
}
else if(y%x==0 && x%x==0)
{
    printf("GCD is %d",x);
}
else if (x%y!=0 && y%x!=0)
{
    int s=x*y;
    printf("%d",s);
}

}