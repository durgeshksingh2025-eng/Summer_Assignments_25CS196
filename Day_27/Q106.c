#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

// Add Employee
void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("Employee Added Successfully!\n");
}

// Display Employees
void displayEmployee() {
    int i;

    if (count == 0) {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\nEmployee Details:\n");
    printf("ID\tName\t\tSalary\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].salary);
    }
}

// Search Employee
void searchEmployee() {
    int id, i, found = 0;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", emp[i].id);
            printf("Name: %s\n", emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee Not Found!\n");
}

// Delete Employee
void deleteEmployee() {
    int id, i, j, found = 0;

    printf("\nEnter Employee ID to Delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (emp[i].id == id) {
            found = 1;
            for (j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            printf("Employee Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Employee Not Found!\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployee();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                deleteEmployee();
                break;
            case 5:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}