#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int age;
    char source[30];
    char destination[30];
    int booked;   // 0 = Not Booked, 1 = Booked
};

struct Ticket t;

void bookTicket() {
    printf("\nEnter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Age: ");
    scanf("%d", &t.age);

    printf("Enter Source: ");
    scanf("%s", t.source);

    printf("Enter Destination: ");
    scanf("%s", t.destination);

    t.booked = 1;

    printf("\nTicket Booked Successfully!\n");
}

void cancelTicket() {
    if (t.booked == 0) {
        printf("\nNo ticket is booked.\n");
    } else {
        t.booked = 0;
        printf("\nTicket Cancelled Successfully!\n");
    }
}

void displayTicket() {
    if (t.booked == 0) {
        printf("\nNo ticket booked.\n");
        return;
    }

    printf("\n------ Ticket Details ------\n");
    printf("Ticket Number : %d\n", t.ticketNo);
    printf("Passenger Name: %s\n", t.name);
    printf("Age           : %d\n", t.age);
    printf("Source        : %s\n", t.source);
    printf("Destination   : %s\n", t.destination);
    printf("Status        : Booked\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Ticket\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;

            case 2:
                cancelTicket();
                break;

            case 3:
                displayTicket();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}