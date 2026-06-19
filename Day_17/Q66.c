#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements: ");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        c[k++] = a[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements: ");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            c[k++] = b[i];
        }
    }

    printf("Union of arrays: ");
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}