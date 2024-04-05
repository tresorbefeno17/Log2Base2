#include<stdio.h>

int main()
{
    int arr[10], n, i, sum;
    
    sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n ; i++)
        scanf("%d", &arr[i]);
    i = 0;
    while(i < n)
    {
        sum = arr[i] + sum;
        i++;
    }
    printf("%d", sum);
        
    return 0;
}
