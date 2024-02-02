#include<stdio.h>

int main()
{
	int num;
    	int i;

    	scanf("%d", &num);

	i = 2;
	while (i < num - 1)
	{
		if (num % i == 0)
		{
		    printf("Not Prime number");
		    return 0;
		}
		
		i++;
	 }
	 printf("Prime number");

	 return 0;
}
