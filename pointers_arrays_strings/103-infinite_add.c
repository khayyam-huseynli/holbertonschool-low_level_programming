/** @s: string to be reversed */
void rev_string(char *s);

/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0 if buffer too small to store result, else return pointer to buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, rl, i, sum, num1, num2, carry;

	rl = i = l1 = l2 = sum = num1 = num2 = carry = 0;
	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;
	if (l1 + 2 > size_r || l2 + 2 > size_r)
		return (0);
	l1--;
	l2--;
	while (i <= l1 || i <= l2)
	{
		num1 = num2 = 0;
		if (i <= l1)
			num1 = n1[l1 - i] - '0';
		if (i <= l2 && (l2 - i) >= 0)
			num2 = n2[l2 - i] - '0';
		sum = num1 + num2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i] = sum + '0';
		i++;
		rl++;
	}
	if (carry > 0)
	{
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}
	else
		r[i] = '\0';
	rev_string(r);
	return (r);
}

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{

	int i = 0;
	char *start; /* points 1st character */
	char *end; /* points last character */

	while (s[i] != '\0')
	{
		i++;
	}

	/** after while loop i = strlen + 1 */

	start = s;
	end = s + i - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
