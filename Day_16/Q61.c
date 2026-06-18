#include <stdio.h>

int main()
{
    int a[10], n, i, sum = 0, total, missing;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = (n + 1) * (n + 2) / 2;

    missing = total - sum;

    printf("Missing number is = %d", missing);

    return 0;
}