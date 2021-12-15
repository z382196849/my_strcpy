#include<stdio.h>
#include<windows.h>
#include<assert.h>

char* my_strcpy(char* dest, char* src)
{
    char* ret = dest;
    while(*dest++ = *src++)
    {
	;
    }
    return ret;
}

void main()
{
    char arr[10] = "abcdefghi";
    my_strcpy(arr, "hello");
    printf("arr[10] = %s\n", arr);
    system("pause");
    return;
}