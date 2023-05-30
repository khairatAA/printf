#include "../main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point to test the printf function
 *
 * Return: success (0)
 */
int main(void)
{
	int count_our_pf = 0;
	int count_pf = 0;
	void* address = (void*)0x12345678;

	write(1, "NORMAL PRINTF:\n", 15);
	count_pf = printf("Character:[%c]%c\n", 't','R');
	printf("The total count printed on printf is %d\n", count_pf);
	write(1, "--------------------------------------------\n", 45);
	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("Character:[%c]%c\n",'t','R');
	printf("The total count printed on our printf is %d\n", count_our_pf);

	write(1, "--------------------------------------------\n", 45);
	write(1, "--------------------------------------------\n", 45);

	write(1, "NORMAL PRINTF:\n", 15);
	count_pf = printf("Address:[%p]\n", address);
	printf("The total count printed on printf is %d\n", count_pf);
	write(1, "--------------------------------------------\n", 45);
	write(1, "OUR PRINTF:\n", 12);
	count_our_pf = _printf("Address:[%p]\n", address);
	printf("The total count printed on our printf is %d\n", count_our_pf);

	return (0);
}
