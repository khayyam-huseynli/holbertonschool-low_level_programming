/**
*set_string - function that sets the value
*             of a pointer to a char
*@s: string to be swapped
*@to: string to be swapped to
*/

void set_string(char **s, char *to)
{
	char *temp = *s;

	*s = to;
	to = temp;
}
