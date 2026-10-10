#include <stdio.h>

int main(void) {
    int choice;
    float balance = 1000.00; // Starting balance
    float amount;

    do {
        printf("\n--- Simple ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("\nCurrent Balance: $%.2f\n", balance);
                break;
                
            case 2:
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f. New balance: $%.2f\n", amount, balance);
                } else {
                    printf("Error: Deposit amount must be greater than zero.\n");
                }
                break;
                
            case 3:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f. Remaining balance: $%.2f\n", amount, balance);
                } else if (amount > balance) {
                    printf("Error: Insufficient funds! You only have $%.2f available.\n", balance);
                } else {
                    printf("Error: Withdrawal amount must be greater than zero.\n");
                }
                break;
                
            case 4:
                printf("\nThank you for banking with us. Goodbye!\n");
                break;
                
            default:
                printf("\nInvalid choice. Please select an option between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}