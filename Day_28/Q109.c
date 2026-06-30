#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued; // 0 = Available, 1 = Issued
};

struct Book books[100];
int count = 0;

void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &books[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", books[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[count].author);

    books[count].issued = 0;
    count++;

    printf("Book added successfully!\n");
}

void displayBooks() {
    if (count == 0) {
        printf("\nNo books available.\n");
        return;
    }

    printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n",
               books[i].id,
               books[i].title,
               books[i].author,
               books[i].issued ? "Issued" : "Available");
    }
}

void searchBook() {
    int id, found = 0;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("\nBook Found!\n");
            printf("ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Status: %s\n", books[i].issued ? "Issued" : "Available");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
}

void issueBook() {
    int id;

    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (books[i].issued)
                printf("Book is already issued.\n");
            else {
                books[i].issued = 1;
                printf("Book issued successfully!\n");
            }
            return;
        }
    }

    printf("Book not found!\n");
}

void returnBook() {
    int id;

    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (!books[i].issued)
                printf("Book is already available.\n");
            else {
                books[i].issued = 0;
                printf("Book returned successfully!\n");
            }
            return;
        }
    }

    printf("Book not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}