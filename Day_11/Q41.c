#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    
    int a, b, c;
    a = 10;
    b = 20;
    c = sum(a, b);
    printf("The sum of %d and %d is %d\n", a, b, c);
    return 0;
}