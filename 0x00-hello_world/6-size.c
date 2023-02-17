#include <stdio.h>
/**
*main -main entry part
*return : always (success)
*/
int main(void)
{
	printf("Size of a char: %lu byts(s)\n", sizeof(char));
	printf("Size of a int: %lu byts(s)\n", sizeof(int));
	printf("Size of a long int: %lu byts(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byts(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byts(s)\n", sizeof(float));
	return (0);
}

