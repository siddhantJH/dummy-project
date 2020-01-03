/*Technical Concepts:if we want to access time or date
we need to access operating system so that we can fetch system date
if were working on windows we need to communicate windows
    to access date,
    //USING CODEBLOCK
    */
#include <windows.h>
#include <stdio.h>
void main()
{
    SYSTEMTIME stime;
    while(1)
    {
    GetLocalTime(&stime);
    printf("%d:%d:%d %s",stime.wHour-12,stime.wMinute,stime.wSecond,stime.wHour>12?"PM":"AM");
    Sleep(1000);
    system("CLS");
}
}
