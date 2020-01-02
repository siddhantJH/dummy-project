#include <stdio.h>
#include <stdlib.h>

void main()
{
    char sen[10],i,k,j;
    printf("Enter a sentence\n");
    gets(sen);
    for(i=0;sen[i]!='\0';i++);
    for(j=0;j<i;j++)
    {
        for(k=97;k<=122;k++)
        {
            if((int)sen[j]==k)
               sen[j]=(char)((int)sen[j]-32);
        }
    }
    printf("%s",sen);
}
