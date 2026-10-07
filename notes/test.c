#include <stdio.h>
int fun()
{
	static int a = 1;
	return ++a;
}

int main()
{
	int tbw = 0;
	tbw = fun() - fun() * fun();
	printf("%d\n", tbw);
	return 0;
}