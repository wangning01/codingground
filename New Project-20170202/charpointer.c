#include <stdio.h>

int main()
{
    char str[]="hello world";
    char* pStr = str;
    printf("%d\n",*(pStr+10));

    return 0;
}

