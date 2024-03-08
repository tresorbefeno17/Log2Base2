#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num < 10)
        printf("%d", num);
    
    else
        while (num != 0)
        {
            printf("%d", num % 10);
            num = num / 10;
        }
    

    return 0;
}
