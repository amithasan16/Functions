#include<stdio.h>
void pattern(int);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     pattern(i);}
     for(int i=n;i>=1;i--)
     {
        pattern(i);
     }
     
}
void pattern(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    printf("\n");
}