int main()
{
    int n, i;
    int divider;
    
    i = 1;
    divider = 0;
    scanf("%d", &n);
    while(i < n)
    {
        if(n % i == 0)
            divider += i;
        i++;
    }
    if(divider == n)
        printf("Yes");
    else
        printf("No");

    return 0;
}
