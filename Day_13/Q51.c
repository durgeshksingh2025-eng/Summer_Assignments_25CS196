#include <stdio.h>
int main()
{
    int a[5], i;
    int largest, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &i);
    printf("Enter Array Elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = smallest = a[0];
    
    for(i = 1; i < 5; i++)
    {
        if(a[i] > largest)
            largest = a[i];
        if(a[i] < smallest)
            smallest = a[i];
    }
    printf("\n Largest Element: %d", largest);
    printf("\n Smallest Element: %d", smallest);
    return 0;
}