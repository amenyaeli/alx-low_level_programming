#include <stdio.h>
/**
 * main - prints the size of various computer types
 * Return: 0 (Hurray)
 */
int main(void)
{
char m;
int n;
long int o;
long long int p;
float q;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(q));
return (0);
}
