#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[100];
    int i = 0, j = 0, max = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            longest[j] = str[i];
            j++;
            len++;
        }
        else
        {
            longest[j] = '\0';

            if (len > max)
            {
                max = len;
                strcpy(longest, longest);
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            j = 0;
            len = 0;
        }

        i++;
    }

    // Find longest word again for printing
    i = 0;
    j = 0;
    len = 0;
    char temp[100];

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            temp[j++] = str[i];
            len++;
        }
        else
        {
            temp[j] = '\0';

            if (len == max)
            {
                printf("Longest word: %s\n", temp);
                printf("Length: %d\n", max);
                break;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            j = 0;
            len = 0;
        }

        i++;
    }

    return 0;
}