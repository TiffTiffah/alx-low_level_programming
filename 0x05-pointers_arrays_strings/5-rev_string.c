include <stdio.h>
#include "main.h"
/**
* rev_string - function to reverse words
* @s : - the parameter to reverse words
*/
void rev_string(char *s)
{
int a = 0, b = 0;
char str[500];
while (*(s + a))
{
*(str + a) = *(s + a);
i++;
}
a = a - 1;
while (a >= 0)
{
*(s + a) = *(str + b);
b++;
a--;
}
}
