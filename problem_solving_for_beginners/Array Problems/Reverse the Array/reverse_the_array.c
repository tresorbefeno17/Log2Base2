#include<stdio.h>

int main()
{
	int arr[10], n, i;
	int tmp;
	
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    i = 0;
    while(i < n / 2)
    {
        tmp = arr[i];
        arr[i] = arr[n- 1 -i];
        arr[n-1 -i] = tmp;
        i++;   
    }
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return (0);
}
