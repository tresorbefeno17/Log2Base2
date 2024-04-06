#include <stdio.h>

int main()
{
    int arr[10], n, i, key;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);
    i = 0;
    while(i < n)
    {
        if(arr[i] == key)
        {
            printf("Key found");
            return ;
        }
        i++;
    }
    printf("Key not found");
    return 0;
}
