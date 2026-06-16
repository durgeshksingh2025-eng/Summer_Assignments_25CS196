#include <stdio.h>

int main()
{
    int a[10], i, n, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            printf("Element found at position %d", i + 1);
            break;
        }
    }
    if(i == n)
    {
        printf("Element not found");
    }
    return 0;
}