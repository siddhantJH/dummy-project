#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
int i;
manage();
}
void manage()
{
    int i;
    char *string[4]={"fekls","qoi","sbv","wkue"};
   for(i=0;i<5;i++)
   {
       int a=givelength(string[i]);
   printf("%d\n",a);
}
}
int givelength(char *s)
{
    return strlen(s);
}
