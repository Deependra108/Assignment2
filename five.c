//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a three digit numbers\n");
    scanf("%d",&x);
    int rem = 0, sum =0;
    rem = x%10;
    x = x/10;
    sum = sum +rem;

    rem = x%10;
    x = x/10;
    sum = sum +rem;

    rem = x%10;
    x = x/10;
    sum = sum +rem;

    printf("Sum is : %d",sum);
    return 0;
}
