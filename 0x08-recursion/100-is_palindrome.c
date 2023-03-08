#include "main.h"

/**
  * _strlen_recursion - Get the length of a string
  * @s: the string to get the length
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

/**
  * isPalindrome - helper function
  * @str: the string value to be checked
  * @low: the first character
  * @high: the last character
  *
  * Return: integer value
  */

int isPalindrome(char *str, int low, int high)
{
	if (low >= high)
	{
		return (1);
	}

	if (str[low] != str[high])
	{
        	return (0);
	}

	return isPalindrome(str, low + 1, high - 1);
}


/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (isPalindrome(s, 0, _strlen_recursion(s) - 1));
}
