#include <stdio.h>
#include <stdlib.h>

int str_len(char *str)
{
    int len;
    int i;
    
    for(i = 0; str[i]; i++)
        ;
    len = i - 1;
    
    return (len);
}

char *str_reverse(char *input)
{
    char *result;
    int i;
    int len;
    
    len = str_len(input);
    result = (char *) malloc((len + 1) * sizeof(char));
    for(i = 0; i <= len; i++)
        result[i] = input[len - i];
        
    result[i] = '\0';
    
    return (result);
}

void    palindrome(char *str)
{
    char *result;
    
    result = str_reverse(str);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] != result[i])
        {
            printf("Not Palindrome");
            return;
        }
    }
    printf("Palindrome");
}

int main()
{
	char str[10];
	scanf("%s", str);

	palindrome(str);
	
	return 0;
}
