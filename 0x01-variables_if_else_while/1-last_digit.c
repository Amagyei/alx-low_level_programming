#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/*
 * main - my code is in here
 *
 * Description : 'it generates an integer and checks things'
 *
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n;
	char statement[50] = "";
	int last_n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
	/* your code goes there */
	if (last_n > 5)
		strcat(statement, " greater than 5");
	else if (last_n == 0)
		strcat(statement, " 0");
	else if (last_n < 6 && n != 0)
		strcat(statement, " less than 6 and not 0");
	printf("Last digit of %d is %d and is%s\n", n, last_n, statement);
	return (0);
	/* Description */
}
