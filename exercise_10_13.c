#include<stdio.h>

Void test (int *a);
main(  )
{
            int  x=50;
            test  ( &x);
            printf (“%d\n”, x);
 }
void  test  (  int  *a)
 {
             *a=*a +50;
 }
