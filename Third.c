// WAP to swap two int variables.
#include<stdio.h>
int main()
{
    int a , b , temp;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    temp = a ;
    a = b ;
    b = temp ;
    printf("a = %d \nb = %d ",a,b);
    return 0;



}
