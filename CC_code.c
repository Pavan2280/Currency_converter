#include <stdio.h>

void INDIAN(float);
void UAE(float);
void AMERICA(float);
void MALAYSIA(float);
void INDONESIA(float);
void SINGAPORE(float);

int main() {
    int choice;
    float amount;

    printf("\tWELCOME TO CURRENCY CONVERTER\n");
    printf("\n[1] INDIAN (RUPEES)");
    printf("\n[2] UAE (AED - United Arab Emirates Dirham)");
    printf("\n[3] AMERICA (USD - United States Dollar)");
    printf("\n[4] MALAYSIA (MYR - Malaysian Ringgit)");
    printf("\n[5] INDONESIA (IDR - Indonesian Rupiah)");
    printf("\n[6] SINGAPORE (SGD - Singapore Dollar)");
    printf("\n[7] EXIT\n");
    printf("\nChoose the number for which you want to convert the currency\n");
    printf("Enter any number from 1 to 7: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter amount: ");
            scanf("%f", &amount);
            INDIAN(amount);
            break;
        case 2:
            printf("\nEnter amount: ");
            scanf("%f", &amount);
            UAE(amount);
            break;
        case 3:
            printf("\nEnter amount: ");
            scanf("%f", &amount);
            AMERICA(amount);
            break;
        case 4:
            printf("\nEnter amount: ");
            scanf("%f", &amount);
            MALAYSIA(amount);
            break;
        case 5:
            printf("\nEnter amount: ");
            scanf("%f", &amount);
            INDONESIA(amount);
            break;
        case 6:
            printf("\nEnter amount: ");
            scanf("%f", &amount);
            SINGAPORE(amount);
            break;
        case 7:
            printf("\nExiting the program.\n");
            break;
        default:
            printf("\nInvalid Input!\n");
            break;
    }

    return 0;
}

void INDIAN(float a) {
    int c;
    float x;
    printf("\nChoose the currency you want RUPEES to be converted to\n");
    printf("[1] AMERICA (USD)\n");
    printf("[2] UAE (AED)\n");
    printf("[3] MALAYSIA (MYR)\n");
    printf("[4] INDONESIA (IDR)\n");
    printf("[5] SINGAPORE (SGD)\n");
    printf("Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (0.013) * a;
            printf("\n%.2f INDIAN (RUPEES) = %.2f AMERICA (USD)\n\n", a, x);
            break;
        case 2:
            x = (0.049) * a;
            printf("\n%.2f INDIAN (RUPEES) = %.2f UAE (AED)\n\n", a, x);
            break;
        case 3:
            x = (0.057) * a;
            printf("\n%.2f INDIAN (RUPEES) = %.2f MALAYSIA (MYR)\n\n", a, x);
            break;
        case 4:
            x = (193.18) * a;
            printf("\n%.2f INDIAN (RUPEES) = %.2f INDONESIA (IDR)\n\n", a, x);
            break;
        case 5:
            x = (0.018) * a;
            printf("\n%.2f INDIAN (RUPEES) = %.2f SINGAPORE (SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void UAE(float a) {
    int c;
    float x;
    printf("\nChoose the currency you want UAE to be converted to\n");
    printf("[1] INDIAN (RUPEES)\n");
    printf("[2] AMERICA (USD)\n");
    printf("[3] MALAYSIA (MYR)\n");
    printf("[4] INDONESIA (IDR)\n");
    printf("[5] SINGAPORE (SGD)\n");
    printf("Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (20.25) * a;
            printf("\n%.2f UAE (AED) = %.2f INDIAN (RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (3.67) * a;
            printf("\n%.2f UAE (AED) = %.2f AMERICA (USD)\n\n", a, x);
            break;
        case 3:
            x = (1.15) * a;
            printf("\n%.2f UAE (AED) = %.2f MALAYSIA (MYR)\n\n", a, x);
            break;
        case 4:
            x = (3912.00) * a;
            printf("\n%.2f UAE (AED) = %.2f INDONESIA (IDR)\n\n", a, x);
            break;
        case 5:
            x = (0.37) * a;
            printf("\n%.2f UAE (AED) = %.2f SINGAPORE (SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void AMERICA(float a) {
    int c;
    float x;
    printf("\nChoose the currency you want AMERICA to be converted to\n");
    printf("[1] INDIAN (RUPEES)\n");
    printf("[2] UAE (AED)\n");
    printf("[3] MALAYSIA (MYR)\n");
    printf("[4] INDONESIA (IDR)\n");
    printf("[5] SINGAPORE (SGD)\n");
    printf("Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (74.38) * a;
            printf("\n%.2f AMERICA (USD) = %.2f INDIAN (RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (3.67) * a;
            printf("\n%.2f AMERICA (USD) = %.2f UAE (AED)\n\n", a, x);
            break;
        case 3:
            x = (4.24) * a;
            printf("\n%.2f AMERICA (USD) = %.2f MALAYSIA (MYR)\n\n", a, x);
            break;
        case 4:
            x = (14370.00) * a;
            printf("\n%.2f AMERICA (USD) = %.2f INDONESIA (IDR)\n\n", a, x);
            break;
        case 5:
            x = (1.36) * a;
            printf("\n%.2f AMERICA (USD) = %.2f SINGAPORE (SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void MALAYSIA(float a) {
    int c;
    float x;
    printf("\nChoose the currency you want MALAYSIA to be converted to\n");
    printf("[1] INDIAN (RUPEES)\n");
    printf("[2] AMERICA (USD)\n");
    printf("[3] UAE (AED)\n");
    printf("[4] INDONESIA (IDR)\n");
    printf("[5] SINGAPORE (SGD)\n");
    printf("Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (17.54) * a;
            printf("\n%.2f MALAYSIA (MYR) = %.2f INDIAN (RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (0.24) * a;
            printf("\n%.2f MALAYSIA (MYR) = %.2f AMERICA (USD)\n\n", a, x);
            break;
        case 3:
            x = (0.87) * a;
            printf("\n%.2f MALAYSIA (MYR) = %.2f UAE (AED)\n\n", a, x);
            break;
        case 4:
            x = (3389.15) * a;
            printf("\n%.2f MALAYSIA (MYR) = %.2f INDONESIA (IDR)\n\n", a, x);
            break;
        case 5:
            x = (0.32) * a;
            printf("\n%.2f MALAYSIA (MYR) = %.2f SINGAPORE (SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void INDONESIA(float a) {
    int c;
    float x;
    printf("\nChoose the currency you want INDONESIA to be converted to\n");
    printf("[1] INDIAN (RUPEES)\n");
    printf("[2] AMERICA (USD)\n");
    printf("[3] MALAYSIA (MYR)\n");
    printf("[4] UAE (AED)\n");
    printf("[5] SINGAPORE (SGD)\n");
    printf("Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (0.0052) * a;
            printf("\n%.2f INDONESIA (IDR) = %.2f INDIAN (RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (0.000070) * a;
            printf("\n%.2f INDONESIA (IDR) = %.2f AMERICA (USD)\n\n", a, x);
            break;
        case 3:
            x = (0.00029) * a;
            printf("\n%.2f INDONESIA (IDR) = %.2f MALAYSIA (MYR)\n\n", a, x);
            break;
        case 4:
            x = (0.00026) * a;
            printf("\n%.2f INDONESIA (IDR) = %.2f UAE (AED)\n\n", a, x);
            break;
        case 5:
            x = (0.000095) * a;
            printf("\n%.2f INDONESIA (IDR) = %.2f SINGAPORE (SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void SINGAPORE(float a) {
    int c;
    float x;
    printf("\nChoose the currency you want SINGAPORE to be converted to\n");
    printf("[1] INDIAN (RUPEES)\n");
    printf("[2] AMERICA (USD)\n");
    printf("[3] MALAYSIA (MYR)\n");
    printf("[4] INDONESIA (IDR)\n");
    printf("[5] UAE (AED)\n");
    printf("Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (54.60) * a;
            printf("\n%.2f SINGAPORE (SGD) = %.2f INDIAN (RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (0.73) * a;
            printf("\n%.2f SINGAPORE (SGD) = %.2f AMERICA (USD)\n\n", a, x);
            break;
        case 3:
            x = (3.11) * a;
            printf("\n%.2f SINGAPORE (SGD) = %.2f MALAYSIA (MYR)\n\n", a, x);
            break;
        case 4:
            x = (10549.11) * a;
            printf("\n%.2f SINGAPORE (SGD) = %.2f INDONESIA (IDR)\n\n", a, x);
            break;
        case 5:
            x = (2.70) * a;
            printf("\n%.2f SINGAPORE (SGD) = %.2f UAE (AED)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}
