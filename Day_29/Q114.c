#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice, max, min, sum = 0;
    int search, found;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    while (1)
    {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Find Sum of Elements\n");
        printf("6. Search an Element\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                printf("Elements inserted successfully.\n");
                break;

            case 2:
                printf("Array Elements: ");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                max = arr[0];
                for (i = 1; i < n; i++)
                {
                    if (arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for (i = 1; i < n; i++)
                {
                    if (arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
                break;

            case 5:
                sum = 0;
                for (i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                printf("Sum of Elements = %d\n", sum);
                break;

            case 6:
                found = 0;
                printf("Enter element to search: ");
                scanf("%d", &search);

                for (i = 0; i < n; i++)
                {
                    if (arr[i] == search)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Element not found.\n");

                break;

            case 7:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
