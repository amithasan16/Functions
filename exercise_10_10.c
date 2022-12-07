#include<stdio.h>
float divide(float ,float );
int main()
{
float a,b,s;
scanf("%f %f",&a,&b);
s=divide(a,b);
printf("%0.2f",s);
}
float divide(float a,float b)
{
    return(a/b);
}