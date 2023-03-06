/*13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a three digit number\n");
    scanf("%d",&a);
    a= (a%10)*100+(a/10);
    printf("%d",a);
    return 0;
}
