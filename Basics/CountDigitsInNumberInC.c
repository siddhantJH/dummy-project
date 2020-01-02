#include <stdio.h>

void main()
{
    int c=0,d,num,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num!=0)
    {
 d=num%10;
 sum=sum+d;
 num=num/10;
 c++;
    }
    printf("no of digit %d sum of digit is %d",c,sum);
}
