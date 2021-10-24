#include <stdio.h>

int main(void) {
	int a = 5, b = 3;
	if (a > b) {
		printf("Cislo %d je vetsi nez cislo %d\n", a, b);
	}
	if (b > a)
	{
		printf("Cislo %d je vetsi nez cislo %d\n", b, a);
	}
	if (a == b)
	{
		printf("Cislo %d se rovna cislu %d\n", a, b);
	}
}
