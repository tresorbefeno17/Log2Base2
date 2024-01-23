#include <stdio.h>

int main(void)
{
	int num;
	
	scanf("%d", &num);
	if (num > 0)
		printf("Positive");
	else if (num < 0)
		printf("Negative");
	else
		printf("Neither positive nor negative");

	return 0;
}
