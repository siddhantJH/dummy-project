#include <stdio.h>
#include <stdlib.h>

main()
{
int num,d,num1;
printf("enter a number\n");
scanf("%d",&num);
while(num!=0)
{
    d=num%10;
    num1=d+10*num1;
    num=num/10;
}
printf("%d",num1);
}
