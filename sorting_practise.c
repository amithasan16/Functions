#include<stdio.h>
int main()
{
    int N=11,i,j,temp;
    int arr[11]={12,7,9,1,3,73,11,15,15,62,19,4};
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);//main sequnce
    }
    printf("\n");
for(j=0;j<(N-2);j++)//jotober sorting hbe 
{
    for(i=0;i<(N-1);i++)
{
    if(arr[i]>arr[i+1])
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
for(i=0;i<N;i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
}
}