#include<stdio.h>
int sum();// Function declaration

int main() // Function call
{
    int c;
    c=sum();
    printf("%d",c);
}

int sum() // Function definition
{
    int x,y,s=0;
    scanf("%d %d",&x,&y);
    s=x+y;
    return s;
}