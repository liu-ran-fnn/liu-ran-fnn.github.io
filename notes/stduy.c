#include <stdio.h>
int main()
{
	int a = 0, b = 2;
	int x = (a++ && ++b) || (++b == 3);
	printf("%d %d %d\n", a, b, x);
	return 0;
}
