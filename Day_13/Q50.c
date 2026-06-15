#include <stdio.h>
int main()
{
    int a[5], i, sum = 0;
    float avg;
    printf("Enter Array Elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = (float)sum / 5;
    printf("\n sum of Array Elements: %d", sum);
    printf("\n Average of Array Elements: %.2f", avg);
    return 0;
}