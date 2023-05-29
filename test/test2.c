#include "../main.h"

/**
 * main - Entry point to test the printf function
 *
 * Return: success (0)
 */
int main(void)
{
	int count_our_pf = 0;
	/* int count_pf = 0; */

	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("%S\n", "Best\nSchool");
	printf("The total count printed on our printf is %d\n", count_our_pf);

	write(1, "--------------------------------------------\n", 45);
	write(1, "--------------------------------------------\n", 45);

	return (0);
}
