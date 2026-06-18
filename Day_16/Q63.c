#include <stdio.h>

int main()
{
    int a[100], n, sum, i, j, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("Pair found: %d %d\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("No pair found");
    }

    return 0;
}