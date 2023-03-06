/*8. Write a program to check whether the given number is even or odd using a bitwise
operator.*/

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    int result = x&1;
    if(result == 1)
        printf("Number is odd");
    else
        printf("Number is Even");
    return 0;
}
