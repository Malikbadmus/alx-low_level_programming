#include <stdio.h>
/**
*main-program starting point
*Return:0 if succesfull
*/
int main(void)  
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
for (alpha = 'A'; alpha <= 'z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
