#include <stdio.h>
/**
 * main -Prints alphabet.
 *
 * Return: 0 (Accomplished)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
