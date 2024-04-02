#include<stdio.h>

int main()
{
    int n, i, j;

    i = 1;
    scanf("%d", &n);
    while(i <= n)
    {
        j = 1;
        while(j <= n)
        {
            if(i == 1 || i == n)
                printf("*");
            else if(j == 1 || j == n)
                printf("*");
            else
                printf(" ");
            
            j++;
        }
        printf("\n");
        i++;

    }
