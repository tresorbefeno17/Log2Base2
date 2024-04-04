#include<stdio.h>

int main(void)
{
  	int n;
  	int i = 1,j;

  	scanf("%d", &n);
  	while( i <= n)
  	{
  	    j = 1;
  	    while(j <= i)
  	    {
  	        printf("*");
  	        j++;
  	    }
  	    printf("\n");
	    i++;
  	}
  	
  	return (0);
}
