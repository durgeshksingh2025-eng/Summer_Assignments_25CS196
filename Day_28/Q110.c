#include <stdio.h>

struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};

struct BankAccount acc;

void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    printf("\nAccount Created Successfully!\n");
}

void deposit() {
    float amount;

    printf("\nEnter Deposit Amount: ");
    scanf("%f", &amount);

    if (amount > 0) {
        acc.balance += amount;
        printf("Amount Deposited Successfully!\n");
    } else {
        printf("Invalid Amount!\n");
    }
}

void withdraw() {
    float amount;

    printf("\nEnter Withdraw Amount: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid Amount!\n");
    } else if (amount > acc.balance) {
        printf("Insufficient Balance!\n");
    } else {
        acc.balance -= amount;
        printf("Withdrawal Successful!\n");
    }
}

void checkBalance() {
    printf("\nCurrent Balance: %.2f\n", acc.balance);
}

void displayAccount() {
    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", acc.accNo);
    printf("Account Holder : %s\n", acc.name);
    printf("Balance        : %.2f\n", acc.balance);
}

int main() {
    int choice;

    createAccount();

    do {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit();
                break;

            case 2:
                withdraw();
                break;

            case 3:
                checkBalance();
                break;

            case 4:
                displayAccount();
                break;

            case 5:
                printf("Thank You for Using Bank Account System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}