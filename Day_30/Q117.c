#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    char course[30];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Course: ");
            scanf(" %[^\n]", s[n].course);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Record Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Student Records Found!\n");
            }
            else
            {
                printf("\n----- Student Records -----\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Course  : %s\n", s[i].course);
                    printf("Marks   : %.2f\n", s[i].marks);
                }
            }
            break;

        case 3:
            found = 0;
            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("\nStudent Found!\n");
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Course  : %s\n", s[i].course);
                    printf("Marks   : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Student Not Found!\n");

            break;

        case 4:
            found = 0;
            printf("Enter Roll Number to Update: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", s[i].name);

                    printf("Enter New Course: ");
                    scanf(" %[^\n]", s[i].course);

                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Record Updated Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Student Not Found!\n");

            break;

        case 5:
            found = 0;
            printf("Enter Roll Number to Delete: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    n--;
                    printf("Record Deleted Successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Student Not Found!\n");

            break;

        case 6:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}