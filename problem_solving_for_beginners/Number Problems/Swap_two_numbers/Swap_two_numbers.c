#include <stdio.h>

int main(void)
{
	int a, b, tmp;

	scanf("%d %d", &a, &b);
	tmp = a;
	a = b;
	b = tmp;
	printf("%d %d", a, b);

	return 0;
}
