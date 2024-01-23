#include <stdio.h>

int main(void)
{
	int N;
	int sum;

	scanf("%d", &N);
	sum = (N * (N + 1)) / 2;
	printf("%d", sum);

	return 0;
}

