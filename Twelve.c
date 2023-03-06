/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include<stdio.h>
int main()
{
    float inr;
    double usd;
    printf("Enter a amount in INR\n");
    scanf("%f",&inr);

    double x = 1/76.23;
    usd = x*inr;
    printf("%f INR in USD is = %lf",inr,usd);
    return 0;
}
