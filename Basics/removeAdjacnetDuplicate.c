#include <stdio.h>
#include <stdlib.h>

void main()
{
    int k,i,j,c=1,o;
    char s[10];// make sure the length of a string does not exceed 10
    printf("Enter a string\n");
    gets(s);// taking input through standardInput(stdin)
    for(i=0;s[i]!='\0';i++);// number of character
    char temp;
    for(k=0;k<i;k++)//counting no of duplicate character
    {
        if(s[k]==s[k+1])
            c++;
    }
   // printf("%d",c);
    for(o=1;o<=c-1;o++)// number of time duplicates present
    {
    for(j=0;j<i-1;j++)// removing duplicates and replacing it with adjacent character
    {
        if(s[j]==s[j+1]||s[j]==NULL)
            {
        temp=s[j+1];
        s[j]=s[j+1];
        s[j+1]=NULL;
        }
    }
    }
    printf("%s",s); // printing the array
}
