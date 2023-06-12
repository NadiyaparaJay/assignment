#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,n,si; 
    printf("please enter your principal amount =");
    scanf("%f",&p);
    printf("please enter your rate of interest =");
    scanf("%f",&r);
    printf("please enter your number of years =");
    scanf("%f",&n);
    si=(p*r*n)/100;
    printf("the simple interest is %f",si);
    getch;
}