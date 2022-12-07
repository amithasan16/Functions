#include<stdio.h>
int largest(int,int);
void display(void);
 main()
{
display();
}
int largest(int x,int y)
{
if(x>y)
{
    printf("%d",x);
}
else{
    printf("%d",y);
}
}
void display(void)
{
    int a,b,s;
    scanf("%d %d",&a,&b);
    s=largest(a,b);
}