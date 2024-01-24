#include <stdio.h>

int my_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}

	return 0;
}

int main(void)
{
	char str1[10], str2[10];
	int cmp = 0;

    	scanf("%s%s", str1, str2);
	cmp = my_strcmp(str1, str2);
	if (cmp == 0)
		printf("Yes");
	else
		printf("No");


    	return 0;
}
