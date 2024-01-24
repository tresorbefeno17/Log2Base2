#include<stdio.h>

int count_vowels(char *str)
{
	int i, vow;

	i = 0;
	vow = 0;
	while (str[i])
    	{
		if ((str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85) 
			|| (str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 
				|| str[i] == 117))
			vow++;
		i++;		    
    	}

	return vow;
}
	
int main()
{
	char str[10];
	scanf("%s", str);

    
    	printf("%d", count_vowels(str));
	return 0;
}
