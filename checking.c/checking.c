/* checkbook balance */

#include <stdio.h>

int main(void)
{
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("checkbook balancing program\n");
    printf("Enter 1 to credit, 2 to debit, 3 to balance, 0 = clear screen, 999 = quit: ");
    for (;;)
    {
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 1:
            printf("Enter credit amount: ");
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2:
            printf("Enter debit amount: ");
            scanf("%f", &debit);
            balance -= debit;
            break;
        case 3:
            printf("Balance: %.2f\n", balance);
            break;
        case 0:
            balance = 0.0f;
            break;
        case 999:
            return 0;
            break;
        default:
            printf("Invalid command. Please try again.\n");
            break;
        }
    }
}