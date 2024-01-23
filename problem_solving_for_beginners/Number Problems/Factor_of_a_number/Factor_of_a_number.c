#include <stdio.h>

int main(void)
{
	int N, X;

	scanf("%d %d", &X, &N);
	if (X % N == 0)
		printf("Yes");
	else
		printf("No");

	return 0;
}

