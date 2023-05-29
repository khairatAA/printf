#include "../main.h"

/**
 * main - Entry point to test the printf function
 *
 * Return: success (0)
 */
int main(void)
{
	int count_our_pf = 0;
	int count_pf = 0;

	write(1, "NORMAL PRINTF:\n", 15);
	count_pf = printf("Negative:[%d]\n", -762534);
	printf("The total count printed on printf is %d\n", count_pf);
	write(1, "--------------------------------------------\n", 45);
	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("Negative:[%d]\n", -762534);
	printf("The total count printed on our printf is %d\n", count_our_pf);


	write(1, "--------------------------------------------\n", 45);
	write(1, "--------------------------------------------\n", 45);
/**
*	write(1, "NORMAL PRINTF:\n", 15);
*	count_pf = printf("String:[%s]\n", "I am a string !");
*	printf("The total count printed on printf is %d\n", count_pf);
*/	write(1, "--------------------------------------------\n", 45);
	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("%b\n", 98);
	printf("The total count printed on our printf is %d\n", count_our_pf);


	return (0);
}
