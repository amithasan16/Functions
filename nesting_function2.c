#include<stdio.h>
int fact(int);//function 1
void display(void);//function 2
int main()
{
    display();//Function 1 call in main function
}
void display(void)
{
int s,n,i,N;
scanf("%d",&N);//Test case
for(i=0;i<N;i++)
{
    scanf("%d",&n);
s=fact(n);//function 2 call in function 1
printf("%d",s);
}
}
int fact(int x)//Function 2 want to find factorial of a number 
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x * fact(x-1);
    }
}