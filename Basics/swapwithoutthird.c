#include <stdlib.h>
#include <stdio.h>

void main()
{
int a;
int b;
printf("Enter value of a and b\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a is %d\n",a);
printf("value of b is %d",b);
}
