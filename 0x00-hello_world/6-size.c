#include <stdio.h>

/**
 * main - Entry point 
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("size of a char: Nlu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int: Nlu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: Nlu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long int: Nlu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a float: Nlu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
