#include<stdio.h>

void fibonacci_series(unsigned int n)
{
    unsigned int i;
    int x1, x2, result;
    
    i = 0;
    while(i <= n - 1)
    {
        if(i == 0)
        {
            x1 = 0;
            printf("%d", x1);
        }
        else if(i == 1)
        {
            x2 = 1;
            printf("%d", x2);
        }
        else
        {
            result = x1 + x2;
            printf("%d", result);
            x1 = x2;
            x2 = result;
        }
        i++;
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);
    fibonacci_series(n);
   
   
    return 0;
}
