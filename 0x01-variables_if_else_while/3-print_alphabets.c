#include <stdio.h>
/**
*main-program starting point
*Return:0 if succesfull
*/
int main(void)  
{
char i;
char j;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (j = 'A'; j <= 'z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
