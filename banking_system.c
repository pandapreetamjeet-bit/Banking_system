#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0;  // initial balance
    float amount;

    printf("Welcome to Simple Banking System\n");

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully.\n");
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Amount withdrawn successfully.\n");
                } else {
                    printf("Invalid amount or insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using our banking system.\n");
                return 0;
            default:
                printf("Invalid choice! Please enter between 1 and 4.\n");
        }
    }

    return 0;
}
