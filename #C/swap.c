#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("Enrer number of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;
    printf("After swapping:\n");
    printf("a is %d\n",a);
    printf("b is %d\n",b);

    return 0;

}



