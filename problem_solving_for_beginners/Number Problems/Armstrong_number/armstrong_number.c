#include<stdio.h>

int main()
{
    int num;
    int number;
    int digit;
    int cube = 0;

    scanf("%d", &num);
    number = num;
    if (num < 10)
    {
        if (num == 0 || num == 1)
            printf("Armstrong number");
        else
            printf("Not Armstrong number");

    }
    else
    {
        while (num != 0)
        {
            digit = num % 10;
            cube += digit * digit * digit;
            num /= 10;
        }
        if (number == cube)
        {
            printf("Armstrong number");

        }
        else
            printf("Not Armstrong number");

    }

    return 0;
}
