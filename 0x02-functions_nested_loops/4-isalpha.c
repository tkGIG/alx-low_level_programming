#include "main.h"
/**
 *_isalpha - checks for alphabets
 *@c: The character to be checked
 *Return: 1 for alphabets 0 for others
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
