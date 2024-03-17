#include<stdio.h>

int reverse_num(int number)
{
    int result;
    
    result = 0;
    while(number)
    {
        result = (result * 10) + number % 10;
        number /= 10;
    }
    
    return (result);
}

int main()
{
    int num;
    int rev;
    scanf("%d", &num);

    rev = reverse_num(num);
    if(rev == num)
        printf("Palindrome");
    else
        printf(" Not Palindrome");
    

    return 0;
}
