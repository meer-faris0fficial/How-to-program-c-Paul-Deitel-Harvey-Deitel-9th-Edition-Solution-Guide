#include <stdio.h>

int main()
{
    float accountNumber = 0.0;
    float beginningBalance = 0.0;

    float totalCharges = 0;
    float totalCredits = 0;
    int creditLimit = 0;

    float balance = 0;
    float limitResult = 0;

    while (accountNumber != -1)
    {
        printf("Enter the account number (-1 to end): ");
        scanf("%f", &accountNumber);
        
        if (accountNumber == -1) break;

        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);
        printf("Enter total charges: ");
        scanf("%f", &totalCharges);
        printf("Enter total credits: ");
        scanf("%f", &totalCredits);
        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        balance = beginningBalance + totalCharges - totalCredits;
        if (balance > creditLimit){
            printf("Account: %f\n", accountNumber);
            printf("Credit limit: %f\n", creditLimit);
            printf("Credit balance: %f\n", balance);
            printf("Credit limit exceed\n");
        }
    }

    return 0;
}
