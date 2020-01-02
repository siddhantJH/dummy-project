#include <stdio.h>

void main()
{
    int n1,n2,l,lcm,i;
printf("Enter 2 number");
    scanf("%d%d",&n1,&n2);
      for(i=n1>n2?n1:n2;i<=n1*n2;i++)
      {
       if(i%n1==0&&i%n2==0)
            break;
      }
      printf("%d",i);
}

