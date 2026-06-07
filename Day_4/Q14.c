#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the position: ");
    scanf("%d", &n);

    if(n == 1)
        printf("Nth Fibonacci term = %d", a);
    else if(n == 2)
        printf("Nth Fibonacci term = %d", b);
    else
    {
        for(i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci term = %d", b);
    }

    return 0;
}