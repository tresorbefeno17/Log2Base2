#include<stdio.h>

int main()
{
    int n, i, j;
    int sum;
    
    scanf("%d", &n);
    int arr[n][n];
    sum = 0;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    
    i = 0;
    while(i < n)
    {
        j = 0;
        while(j < n)
        {
            sum = sum + arr[i][j];
            j++;
        }
        i++;
    }
    printf("%d", sum);
  
    return (0);
}
