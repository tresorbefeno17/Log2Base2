#include<stdio.h>


char   *concatenate(char *string1, char *string2, char *dest)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while(string1[i])
    {
        dest[i] = string1[i];
        i++;
    }
    while(string2[j])
    {
        dest[i] = string2[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    
    return (dest);
}

int main()
{
    char str1[10], str2[10], str3[20];
    
    scanf("%s%s", str1, str2);
    printf("%s", concatenate(str1, str2, str3));
    
    
    return 0;
}
