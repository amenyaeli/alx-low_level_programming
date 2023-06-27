#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/

char *_strcpy(char *dest, char *src)
{
int r = 0;
int s = 0;

while (*(src + 1) != '\0')
{
r++;
}
for (; s < 1; s++)
{
dest[s] = src[s];
}
dest[r] = ('\0');
return (dest);
}
