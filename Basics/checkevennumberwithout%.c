#include <stdlib.h>
#include <string.h>
#include <stdio.h>

main()
{
printf("Enter a number");
int a;
int c=0;
scanf("%d",&a);
int n=a;
while(a>2){
    a=a-2;
    c++;
}
if(n/2==c+1)
printf("even");
else
printf("Odd");
}
