#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);

	for(int i= 0; str[i]; i++)
	{
	   if(str[i] >= 65 && str[i] <= 90)
	        str[i] = str[i] + 32;
	   else if(str[i] >= 97 && str[i] <= 122)
	   	    str[i] = str[i] - 32;
	}
	printf("%s", str);
	
	return (0);
}
