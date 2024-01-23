#include <stdio.h>

int main(void)
{
	int N;
	int i;
	int sum;

	i = 1;
	sum = 0;
	scanf("%d", &N);
	while ( i <= N)
	{
		sum += i;
		i++;
	}
	printf("%d", sum);

	return 0;
}


