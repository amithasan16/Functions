#include<stdio.h>
int is_odd_even();
int main()
{
    int a,s;
    scanf("%d",&a);
    s=is_odd_even(a);
    
}
int is_odd_even(int a)
{
    if(a%2==0)
    {
        printf("Even: %d\n",a);
    }
    else{
        printf("Odd: %d\n",a);
    }
    return a;
}