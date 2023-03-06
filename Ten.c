/*10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/

#include<stdio.h>
int main()
{
    int x,r;
    printf("Enter a Number\n");
    scanf("%d",&x);
    r = x%10;
    x = x -r;
    printf("%d",x);
    return 0;
}
