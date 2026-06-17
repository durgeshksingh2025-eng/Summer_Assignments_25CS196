#include <stdio.h>
int main()
{
    int a[10], n, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter Array Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    temp = a[n-1];
    for(i=n-1; i>0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;
    printf("\nArray Elements after Right Rotation: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}