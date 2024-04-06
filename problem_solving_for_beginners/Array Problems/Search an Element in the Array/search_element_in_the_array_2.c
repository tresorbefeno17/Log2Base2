#include<stdio.h>

int main()
{
    int arr[10], n, i, key;
    int flag;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &key);
    flag = 0;
    i = 0;
    while(i < n)
    {
        if(arr[i] == key)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 1)
        printf("Key found");
    else
        printf("Key not found");
        
    return (0);
}
