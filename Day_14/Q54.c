#include <stdio.h>

int main()
{
    int a[10], i, n, num, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            count++;
        }
    }
     printf("Frequency of %d is %d", num, count);
    return 0;
}