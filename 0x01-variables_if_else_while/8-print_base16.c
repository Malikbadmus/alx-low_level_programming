#include <stdio.h>
/**
*main-program starting point
*Return: 0 if sucessfull
*/
int main(void)
{
int i;
char hex[] = "0123456789abcdef";
for (i = 0; i < 16; i++)
{
putchar(hex[i]);
}
putchar('\n');
return (0);
}
