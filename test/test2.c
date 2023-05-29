#include "../main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <unistd.h>
=======
>>>>>>> 7381e8f5ca229a4434d58e8fb511562de8be8a32

/**
 * main - Entry point to test the printf function
 *
 * Return: success (0)
 */
int main(void)
{
	int count_our_pf = 0;
<<<<<<< HEAD
	int count_pf = 0;

	write(1, "NORMAL PRINTF:\n", 15);
	count_pf = printf("Character:[%c]%c\n", 't', 'R');
	printf("The total count printed on printf is %d\n", count_pf);
	write(1, "--------------------------------------------\n", 45);
	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("Character:[%c]%c\n", 't', 'R');
	printf("The total count printed on our printf is %d\n", count_our_pf);
	write(1, "haste%d\n", 8);

	write(1, "--------------------------------------------\n", 45);
	write(1, "--------------------------------------------\n", 45);
	write(1, "NORMAL PRINTF:\n", 15);
	count_pf = printf("hexa: %x\n", 98);
	printf("The total count printed on printf is %d\n", count_pf);

	write(1, "--------------------------------------------\n", 45);
	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("hexa: %x\n", 98);
	printf("The total count printed on our printf is %d\n", count_our_pf);
	write(1, "--------------------------------------------\n", 45);
	write(1, "--------------------------------------------\n", 45);
	write(1, "NORMAL PRINTF:\n", 15);
	count_pf = printf("Hexa: %X\n", 9853);
	printf("The total count printed on printf is %d\n", count_pf);

	write(1, "--------------------------------------------\n", 45);
	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("Hexa: %X\n", 9853);
	printf("The total count printed on our printf is %d\n", count_our_pf);
	return (0);	

=======
	/* int count_pf = 0; */

	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("%S\n", "Best\nSchool");
	printf("The total count printed on our printf is %d\n", count_our_pf);

	write(1, "--------------------------------------------\n", 45);
	write(1, "--------------------------------------------\n", 45);

	return (0);
>>>>>>> 7381e8f5ca229a4434d58e8fb511562de8be8a32
}
