// -------------------------------------------------------------
// This is my Currency Converter project.
// I have added very simple comments everywhere,
// so that even a beginner can understand how the program works.
// -------------------------------------------------------------
#include <stdio.h>

int main() {

    // These variables will store the user's choices and values.
    // 'from' means the currency user HAS.
    // 'to' means the currency user WANTS.
    // 'amount' is how much money user enters.
    // 'inInr' is temporary value converted into Indian Rupees.
    // 'result' is the final converted amount.
    int from, to;            // stores user's currency choices
    float amount, inInr, result;   // used for calculation

    // Below are the currency rates compared to Indian Rupees (INR).
    // For example: 1 USD ≈ 83 INR.
    // These values are approximate and can be changed anytime.
    // Exchange rates (approx) – stored in simple variables
    float usd_to_inr = 83.0;
    float eur_to_inr = 89.0;
    float gbp_to_inr = 104.0;
    float jpy_to_inr = 0.57;
    float aud_to_inr = 55.0;
    float aed_to_inr = 22.6;

    // These store the opposite direction conversion.
    // Example: If 1 USD = 83 INR, then 1 INR = 1/83 USD.
    // We calculate these so that conversion becomes easier later.
    float inr_to_usd = 1.0 / usd_to_inr;
    float inr_to_eur = 1.0 / eur_to_inr;
    float inr_to_gbp = 1.0 / gbp_to_inr;
    float inr_to_jpy = 1.0 / jpy_to_inr;
    float inr_to_aud = 1.0 / aud_to_inr;
    float inr_to_aed = 1.0 / aed_to_inr;

    // Printing a nice heading for the program so it looks clean.
    // -------- HEADER --------
    printf("\n=====================================\n");
    printf("         CURRENCY CONVERTER\n");
    printf("=====================================\n");

    // Showing the user a list of available currencies to choose from.
    // I also added the currency symbols to make it look better.
    printf("Available Currencies:\n");
    printf("1. Indian Rupee (INR - ₹)\n");
    printf("2. US Dollar (USD - $)\n");
    printf("3. Euro (EUR - €)\n");
    printf("4. British Pound (GBP - £)\n");
    printf("5. Japanese Yen (JPY - ¥)\n");
    printf("6. Australian Dollar (AUD - A$)\n");
    printf("7. UAE Dirham (AED - د.إ)\n");

    // Asking the user to enter the currency numbers and amount
    // according to the menu displayed above.
    // Get user input
    printf("\nEnter the number of the currency you HAVE: ");
    scanf("%d", &from);

    printf("Enter the number of the currency you want to CONVERT TO: ");
    scanf("%d", &to);

    printf("Enter the amount: ");
    scanf("%f", &amount);

    // -----------------------------------------------------------
    // STEP 1: Convert the currency user entered INTO INR.
    // Why? Because INR will act as a "middle point".
    // This makes every conversion very easy.
    // -----------------------------------------------------------
    switch(from) {
        case 1: inInr = amount; break;               // If user already has INR, no change needed
        case 2: inInr = amount * usd_to_inr; break;  // Converting USD → INR
        case 3: inInr = amount * eur_to_inr; break;  // Converting EUR → INR
        case 4: inInr = amount * gbp_to_inr; break;  // Converting GBP → INR
        case 5: inInr = amount * jpy_to_inr; break;  // Converting JPY → INR
        case 6: inInr = amount * aud_to_inr; break;  // Converting AUD → INR
        case 7: inInr = amount * aed_to_inr; break;  // Converting AED → INR
        default:
            printf("\nInvalid choice! Please restart.\n");
            return 0;
    }

    // -----------------------------------------------------------
    // STEP 2: Now convert the INR value into the target currency
    // the user wants. This gives us the final result.
    // -----------------------------------------------------------
    switch(to) {
        case 1: result = inInr; break;                   // INR → INR (no change)
        case 2: result = inInr * inr_to_usd; break;      // INR → USD
        case 3: result = inInr * inr_to_eur; break;      // INR → EUR
        case 4: result = inInr * inr_to_gbp; break;      // INR → GBP
        case 5: result = inInr * inr_to_jpy; break;      // INR → JPY
        case 6: result = inInr * inr_to_aud; break;      // INR → AUD 
        case 7: result = inInr * inr_to_aed; break;      // INR → AED
        default:
            printf("\nInvalid choice! Please restart.\n");
            return 0;
    }

    // Finally, we print the converted amount.
    // The symbol changes depending on the currency the user selected.
    // ---------- OUTPUT ----------
    printf("\n=====================================\n");
    printf("Converted Amount: ");

    switch(to) {
        case 1: printf("₹ %.2f\n", result); break;
        case 2: printf("$ %.2f\n", result); break;
        case 3: printf("€ %.2f\n", result); break;
        case 4: printf("£ %.2f\n", result); break;
        case 5: printf("¥ %.2f\n", result); break;
        case 6: printf("A$ %.2f\n", result); break;
        case 7: printf("د.إ %.2f\n", result); break;
    }
    printf("=====================================\n");

    return 0;
}
