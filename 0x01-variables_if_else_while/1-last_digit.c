#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_n = n % 10;
	/* your code goes there */
	char statement[50];
	if (n > 5)
		strcat(statement, " greater than 5");
	else if (n == 0) 
		strcat(statement, " 0");
	else if (n < 6 && n != 0 )
		strcat(statement, " less than 6 and not 0"); 
	printf("Last digit of %d is %d and is %s\n", n, last_n, statement);
	return (0);
}
