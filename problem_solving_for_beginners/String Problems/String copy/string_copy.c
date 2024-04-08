#include<stdio.h>

int main()
{
	char str[10], copy_str[10];
	int i;
	
	scanf("%s", str);
	for(i = 0; str[i]; i++)
	    copy_str[i] = str[i];
	copy_str[i] = '\0';
	
	printf("Copied string = %s",copy_str);
	
	return (0);
}
