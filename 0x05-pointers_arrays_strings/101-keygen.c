#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description :  generates random valid passwords
 *
 * Return: 0 -> success
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int pass_length;

	pass_length = 10;
	char password[pass_length];

	int i;

	time_t t;
	srand((unsigned int)time(&t));

	for (i = 0; i < pass_length; i++)
		password[i] = (char)(rand() % 128);

	printf("Tada! Congrats");

	return (0);
}
