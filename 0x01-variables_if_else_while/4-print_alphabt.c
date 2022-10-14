#include <stdio.h>
/**
*main-program starting point
*Return: 0 if sucessfull
*/
int main(void)  
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
continue;
putchar(i);
}
putchar('\n');
return (0);
}
