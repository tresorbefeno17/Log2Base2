#include<stdio.h>

int main()
{
    int arr[10], size, i;
    int odd_i, even_i;
    scanf("%d", &size);

    odd_i = 0;
    even_i = 0;
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    i = 0;
    while(i < size)
    {
        if(arr[i] % 2 == 0)
            even_i++;
        else
            odd_i++;
        i++;
    }
    printf("Even Number Count = %d\n Odd Number Count = %d", even_i, odd_i);
    
    return 0;
}
