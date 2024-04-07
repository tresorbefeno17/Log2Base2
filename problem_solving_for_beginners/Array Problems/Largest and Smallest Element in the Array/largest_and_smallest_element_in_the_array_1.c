#include<stdio.h>

int main()
{
    int arr[10], n, i;
    int index, tmp;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    index = 0;
    i = 0;
    while(i < n - 1)
    {
        if(arr[i] > arr[i+1])
        {
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
            
            index = i+1;
        }
        i++;
    }
    printf("Max = %d\n", arr[index]);
    i = 0;
    index = 0;
     while(i < n - 1)
    {
        if(arr[i] < arr[i+1])
        {
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
            
            index = i+1;
        }
        i++;
    }
        printf("Min = %d", arr[index]);

    return (0);
}
