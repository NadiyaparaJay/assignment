#include<stdio.h>
int main()
{
    int a,b,c1,c2;
    printf("enter the value of the a:");
    scanf("%d", &a);
    printf("enter the value of the b:");
    scanf("%d", &b);
    c1 = a + b;
     c2 = a - b;
    printf("addition of a and b is:%d",c1);
    printf("\nsubtraction of a and b is:%d",c2);
    printf("\nmultiplication of a and b is%d",a*b);
    printf("\ndivision of a and b is:%d",a/b);
    printf("\nmodulo of a and b is:%d",a%b);
    return 0;
}
