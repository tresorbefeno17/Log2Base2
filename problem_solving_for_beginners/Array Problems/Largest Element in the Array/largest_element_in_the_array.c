#include<stdio.h>

int main()
{
    int arr[10], n, i, index;
    int tmp;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    index = n - 1;
    i = 0;
    while(i < n - 1)
    {
        if(arr[i] > arr[i+1])
        {
            tmp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = tmp;
            
            index = i + 1;
        }
        i++;
    }
    printf("Max = %d", arr[index]);
    
    return 0;
}
