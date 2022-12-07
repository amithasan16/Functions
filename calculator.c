#include<stdio.h>
void sum();
void sub();
void mul();
void div();
void mod();
void main(){
    sum();
    sub();
    mul();
    div();
    mod();
}
void sum(){
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    s=a+b;
    printf("%d",s);
}
void sub(){
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    s=a-b;
    printf("%d",s);
}void mul(){
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    s=a*b;
    printf("%d",s);
}void div(){
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    s=a/b;
    printf("%d",s);
}void mod(){
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    s=a%b;
    printf("%d",s);
}