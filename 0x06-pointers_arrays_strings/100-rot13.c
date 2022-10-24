#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	int len;
	char *inp = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *outp = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	len = 0, i = 0,j = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == inp[j])
			{
				s[i] = outp[j];
				break;
			}
		}
	}
	return (s);
}
