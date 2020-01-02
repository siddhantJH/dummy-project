#include <stdlib.h>
#include <stdio.h>

main()
{
    int i,l;
    char s[10];
    printf("Enter a string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    for(l=0;l<i/2;l++)
    {
        char t;
        t=s[l];
        s[l]=s[i-1-l];
        s[i-1-l]=t;
    }
    printf("%s",s);
}
