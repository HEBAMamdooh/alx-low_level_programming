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
	char password[10];

	int i;

	time_t t;

	srand((unsigned int)time(&t));

	for (i = 0; i < 10; i++)
		password[i] = (char)(rand() % 128);

	printf("%s\n", password);
	return (0);
}
