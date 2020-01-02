#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
    int a[10],i,j,temp;9;
    int min=10;
    int max=min+9;
srand(time(0));
    for(i=0;i<=9;i++)
    {
        temp=rand()%10;
      for(j=0;j<=i-1;j++)
      {
          if(a[j]==temp)
            break;
      }
      if(j==i)
        a[j]=temp;
      else
        i--;
    }
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
}
