#include<stdio.h>

int main()
{
    int arr[10], n, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0], min = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("Max = %d\n", max);
    printf("Min = %d", min); 
    return 0;
}
