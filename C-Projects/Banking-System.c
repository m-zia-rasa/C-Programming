/*
 * Project : Banking System
 * Level   : Intermediate
 *
 * A small in-memory banking example with deposits, withdrawals, and balance checks.
 * The program keeps data in an array to focus on structures and validation.
 *
 * Build:
 *   cl /W4 /Fe:bank.exe Banking-System.c
 */

#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 3

typedef struct {
    int account_number;
    char owner[40];
    double balance;
} Account;

static Account *find_account(Account accounts[], int count, int account_number)
{
    int i;

    for (i = 0; i < count; i++) {
        if (accounts[i].account_number == account_number) {
            return &accounts[i];
        }
    }

    return NULL;
}

static int read_int(const char *prompt, int *value)
{
    char line[100];

    printf("%s", prompt);
    if (fgets(line, sizeof line, stdin) == NULL) {
        return 0;
    }

    return sscanf(line, "%d", value) == 1;
}

static int read_double(const char *prompt, double *value)
{
    char line[100];

    printf("%s", prompt);
    if (fgets(line, sizeof line, stdin) == NULL) {
        return 0;
    }

    return sscanf(line, "%lf", value) == 1;
}

int main(void)
{
    Account accounts[MAX_ACCOUNTS] = {
        {1001, "Ali", 500.0},
        {1002, "Sara", 1250.5},
        {1003, "Noor", 300.0}
    };
    int choice;
    int account_number;
    double amount;
    Account *account;

    printf("Banking System\n");
    printf("1. Deposit\n2. Withdraw\n3. Check balance\nChoose: ");

    if (!read_int("", &choice) || !read_int("Account number: ", &account_number)) {
        printf("Invalid input.\n");
        return 1;
    }

    account = find_account(accounts, MAX_ACCOUNTS, account_number);
    if (account == NULL) {
        printf("Account not found.\n");
        return 1;
    }

    switch (choice) {
    case 1:
        if (!read_double("Deposit amount: ", &amount) || amount <= 0.0) {
            printf("Deposit amount must be positive.\n");
            return 1;
        }
        account->balance += amount;
        break;
    case 2:
        if (!read_double("Withdrawal amount: ", &amount) || amount <= 0.0) {
            printf("Withdrawal amount must be positive.\n");
            return 1;
        }
        if (amount > account->balance) {
            printf("Insufficient balance.\n");
            return 1;
        }
        account->balance -= amount;
        break;
    case 3:
        break;
    default:
        printf("Unknown operation.\n");
        return 1;
    }

    printf("Account: %d (%s)\n", account->account_number, account->owner);
    printf("Balance: %.2f\n", account->balance);

    return 0;
}
