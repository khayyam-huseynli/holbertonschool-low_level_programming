/**
 * find_len - returns the length of a string.
 * @str: string
 * Return: the length of a string
 */

int find_len(char *str)
{

	if (*str == '\0')
		return (0);
	else
		return (1 + find_len(str + 1));
}


/**
 * check_palindrome - comparas each character of the string.
 * @s: string
 * @i: iterator.
 * Return: 1 if palindorme 0 else
 */

int check_palindrome(char *s, int i)
{
	int len = 0;

	len = find_len(s);

	if (s[i] != s[len - i - 1])
		return (0);
	if (i < len - i - 1)
	{
		return (0 + check_palindrome(s, i + 1));

	}
	return (1);
}

/**
 * is_palindrome - delects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check_palindrome(s, 0));
}


