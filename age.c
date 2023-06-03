#include<stdio.h>
int main()
{
    int age,past_age,future_age;
    printf("please enter your age:");
    scanf("%d",&age);
    past_age= age - 10;
    future_age= age + 10;
    printf("your age  10 years ago was:%d",past_age);
    printf("\nyour age  now 10 years will be:%d",future_age);
}