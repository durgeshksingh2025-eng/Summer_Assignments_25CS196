#include<stdio.h>
int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b, c;
    a = 14;
    b = 9;
    c = max(a, b);
    printf("The greater number between %d and %d is %d\n", a, b, c);
    return 0;
}