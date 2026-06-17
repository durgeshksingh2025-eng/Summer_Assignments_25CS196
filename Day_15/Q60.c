#include <stdio.h>
int main()
{
    int a[10], n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter Array Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i] == 0)
        {
            for(j=i; j<n-1; j++)
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Array after moving zeros to end: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}