#include<stdio.h>

int main()
{
    int n, i, j;

    i = 0;
    scanf("%d", &n);
    while(i < n)
    {
        j = 0;
        while(j < n)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    

    return 0;
}
