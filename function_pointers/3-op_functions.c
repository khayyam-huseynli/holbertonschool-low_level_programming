/**
* op_add - function that adds two integers
*
* @a: integer
* @b: integer
*
* Return: returns the sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}



/**
  2 * op_sub - function that subtracs two integers
  3 *
  4 * @a: integer
  5 * @b: integer
  6 *
  7 * Return: returns the difference of a and b
  8 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  2 * op_mul - function that multiplicates two integers
  3 *
  4 * @a: integer
  5 * @b: integer
  6 *
  7 * Return: returns the product of a and b
  8 */

int op_mul(int a, int b)
{
 	return (a * b);
}

/**
  2 * op_div - function that divides two integers
  3 *
  4 * @a: integer
  5 * @b: integer
  6 *
  7 * Return: returns the division of a and b
  8 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  2 * op_mod - function that finds reminder of  two integers
  3 *
  4 * @a: integer
  5 * @b: integer
  6 *
  7 * Return: returns the remainder of the division of a by b
  8 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
 		printf("Error\n");
 		exit(100);
 	}
 	return (a % b);
 }
