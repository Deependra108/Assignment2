//WAP to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("Given number %d Without last digit is %d",x,x/10);
    printf("\n");
    return 0;
}
