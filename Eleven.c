/*11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

#include<stdio.h>
int main()
{
    int x,d;
    printf("Enter a Number \n");
    scanf("%d",&x);
    printf("Enter a digit\n");
    scanf("%d",&d);
    x = x*10 + d;
    printf("%d",x);


    return 0;
}
