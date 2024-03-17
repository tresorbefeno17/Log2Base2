#include<stdio.h>

int main()
{
    int num, sum = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        sum += num % 10;
        sum *= 10;
        num /= 10;
    }
    
    sum /= 10;
    printf("%d", sum);
    
    return 0;
}
