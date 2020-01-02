#include <stdio.h>
#include <stdlib.h>
void main()
{
char s[10];
gets(s);
char *s1;
s1=strrev(s);
printf("%s\n",s1);
}
