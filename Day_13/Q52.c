#include <stdio.h>
int main()
{
    int even=0, odd=0, a[5], i;
    printf("Enter Array Elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf(" Number of Even Elements: %d\n", even);
    printf(" Number of Odd Elements: %d\n", odd);
    return 0;
}