#include<stdio.h>

int main()
{
	char str[10];
	int i;
	int len;
	
	scanf("%s", str);
	for(i = 0; str[i]; i++)
	    ;
	len = i--;
	for(i = len; i >= 0; i--)
	    printf("%c", str[i]);

	return (0);
}
