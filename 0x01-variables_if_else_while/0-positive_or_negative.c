#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */

int main(void)
{
README.md int n;

README.md srand(time(0));
README.md n = rand() - RAND_MAX / 2;
README.md /* your code goes there */
README.md if (n > 0)
README.md README.md printf("%d is positive\n", n);
README.md else if (n < 0)
README.md README.md printf("%d is negative\n", n);
README.md else
README.md README.md printf("%d is zero\n", n);
README.md return (0);
}
