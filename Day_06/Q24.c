#include <stdio.h>

int main()
{
    int x, n, p = 1;

    scanf("%d%d", &x, &n);

    while(n > 0)
    {
        p = p * x;
        n--;
    }

    printf("%d", p);

    return 0;
}