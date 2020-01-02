#include <stdio.h>
#include <stdlib.h>

 // program to convert binary to decimal

void main()
{
    int i,sum=0;
    int s[3];
    printf("Enter a number");
    for(i=0;i<3;i++)
    {

    scanf("%d",&s[i]);
    }
    for(i=0;i<3;i++)

    {
        sum=sum+pow(2,i)*s[2-i];
    }
    printf("%d",sum);
}
