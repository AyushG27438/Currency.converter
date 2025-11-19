// CURRECY CONVERTER
#include <stdio.h>

int main()
{
    int choice;
    float amount, converted;
    float rupee, dollar, euro;

    printf("Currency Converter\n");
    printf("Choose the currency you have:\n");
    printf("Enter 1: Rupee\n");
    printf("Enter 2: Dollar\n");
    printf("Enter 3: Euro\n");
    printf("Enter your choice (1 , 2 , 3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // ₹ to others
        printf("Enter amount in rupee: ");
        scanf("%f", &rupee);

        printf("Choose a currency to convert to:\n");
        printf("1. Dollar\n");
        printf("2. Euro\n");
        printf("Enter choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            converted = rupee / 88; // ₹ to $
            printf("Converted amount: %.2f $\n", converted);
        }
        else if (choice == 2)
        {
            converted = rupee / 102; // ₹ to €
            printf("Converted amount: %.2f €\n", converted);
        }
        else
        {
            printf("Invalid choice\n");
        }
        break;
    case 2: // $ to others
        printf("Enter the amount: ");
        scanf("%f", &amount);
        rupee = amount * 88;
        euro = amount * 0.86;
        printf("%.2f $ = %.2f ₹\n", amount, rupee);
        printf("%.2f $ = %.2f €\n", amount, euro);
        break;
    case 3: // € to others
        printf("Enter the amount: ");
        scanf("%f", &amount);
        rupee = amount * 102;
        dollar = amount * 1.16;
        printf("%.2f € = %.2f ₹\n", amount, rupee);
        printf("%.2f € = %.2f $\n", amount, dollar);
        break;

    default:
        printf("Invalid choice\n");
    }
    return 0;
}
