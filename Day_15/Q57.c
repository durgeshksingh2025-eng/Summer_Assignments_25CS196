#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter Array Elements: ");
    for(int i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nReverse Array Elements: ");
    for(int i=4; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}