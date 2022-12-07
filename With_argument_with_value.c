#include<stdio.h>
int sum(int, int);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=sum(a,b);
    printf("%d",c);
}
int sum(int a, int b)
{
    int s=0;
s=a+b;
return s;

}