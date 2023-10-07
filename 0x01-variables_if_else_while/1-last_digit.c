#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */

/* int main - my code is in here
 *
 * description -it does something
 *
 * return - 0 (success)
 * 
 * */
int main(void)
{
	int n;
	char statement[50];
	int last_n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
	/* your code goes there */
	if (n > 5)
		strcat(statement, " greater than 5");
	else if (n == 0) 
		strcat(statement, " 0");
	else if (n < 6 && n != 0 )
		strcat(statement, " less than 6 and not 0"); 
	printf("Last digit of %d is %d and is %s\n", n, last_n, statement);
	return (0);
}
