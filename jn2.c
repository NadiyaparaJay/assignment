#include<stdio.h>
void main();
{
    int age,past age,future age;
    printf("please enter your age:");
    scanf("%d"&age);
    past age=age--1;
    future age=age++1;
    printf("your age  ago was:%d"past age);
    printf("your age  now will be:%d"future age);
    return 0;
}