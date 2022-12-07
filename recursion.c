#include<stdio.h>
int fact(int);
main()
{
    int n,i;
    scanf("%d",&n);
    i=fact(n);
    printf("%d",i);
}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}