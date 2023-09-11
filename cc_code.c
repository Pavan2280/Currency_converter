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

    printf("\t WELCOME TO CURRENCY CONVERTER");
    printf("\n");
    printf("\n [1] INDIAN(RUPEES)");
    printf("\n [2] UAE(AED - United Arab Emirates Dirham)");
    printf("\n [3] AMERICA(USD - United States Dollar)");
    printf("\n [4] MALAYSIA(MYR - Malaysian Ringgit)");
    printf("\n [5] INDONESIA(IDR - Indonesian Rupiah)");
    printf("\n [6] SINGAPORE(SGD - Singapore Dollar)");
    printf("\n [7] EXIT ");
    printf("\n");
    printf("\n Choose the number for which you want to convert the currency");
    printf("\n Enter any number from 1 to 7: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf(" \n Enter amount: ");
            scanf("%f", &amount);
            INDIAN(amount);
            break;
        case 2:
            printf("\n Enter amount: ");
            scanf("%f", &amount);
            UAE(amount);
            break;
        case 3:
            printf("\n Enter amount: ");
            scanf("%f", &amount);
            AMERICA(amount);
            break;
        case 4:
            printf("\n Enter amount: ");
            scanf("%f", &amount);
            MALAYSIA(amount);
            break;
        case 5:
            printf("\n Enter amount: ");
            scanf("%f", &amount);
            INDONESIA(amount);
            break;
        case 6:
            printf("\n Enter amount: ");
            scanf("%f", &amount);
            SINGAPORE(amount);
            break;
        case 7:
            printf("\n Exiting the program.");
            break;
        default:
            printf("\n Invalid Input!");
            break;
    }

    return 0;
}

void INDIAN(float a) {
    int c;
    float x;
    printf("Choose the currency you want RUPEES to be converted to");
    printf("\n");
    printf("\n [1] AMERICA(USD)");
    printf("\n [2] UAE(AED)");
    printf("\n [3] MALAYSIA(MYR)");
    printf("\n [4] INDONESIA(IDR)");
    printf("\n [5] SINGAPORE(SGD)");
    printf("\n Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (0.013) * a;
            printf(" %f INDIAN(RUPEES) = %f AMERICA(USD)\n\n", a, x);
            break;
        case 2:
            x = (0.049) * a;
            printf(" %f INDIAN(RUPEES) = %f UAE(AED)\n\n", a, x);
            break;
        case 3:
            x = (0.057) * a;
            printf(" %f INDIAN(RUPEES) = %f MALAYSIA(MYR)\n\n", a, x);
            break;
        case 4:
            x = (193.18) * a;
            printf(" %f INDIAN(RUPEES) = %f INDONESIA(IDR)\n\n", a, x);
            break;
        case 5:
            x = (0.018) * a;
            printf(" %f INDIAN(RUPEES) = %f SINGAPORE(SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void UAE(float a) {
    int c;
    float x;
    printf("Choose the currency you want UAE to be converted to");
    printf("\n");
    printf("\n [1] INDIAN(RUPEES)");
    printf("\n [2] AMERICA(USD)");
    printf("\n [3] MALAYSIA(MYR)");
    printf("\n [4] INDONESIA(IDR)");
    printf("\n [5] SINGAPORE(SGD)");
    printf("\n Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (20.25) * a;
            printf(" %f UAE(AED) = %f INDIAN(RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (3.67) * a;
            printf(" %f UAE(AED) = %f AMERICA(USD)\n\n", a, x);
            break;
        case 3:
            x = (1.15) * a;
            printf(" %f UAE(AED) = %f MALAYSIA(MYR)\n\n", a, x);
            break;
        case 4:
            x = (3912.00) * a;
            printf(" %f UAE(AED) = %f INDONESIA(IDR)\n\n", a, x);
            break;
        case 5:
            x = (0.37) * a;
            printf(" %f UAE(AED) = %f SINGAPORE(SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void AMERICA(float a) {
    int c;
    float x;
    printf("Choose the currency you want AMERICA to be converted to");
    printf("\n");
    printf("\n [1] INDIAN(RUPEES)");
    printf("\n [2] UAE(AED)");
    printf("\n [3] MALAYSIA(MYR)");
    printf("\n [4] INDONESIA(IDR)");
    printf("\n [5] SINGAPORE(SGD)");
    printf("\n Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (74.38) * a;
            printf(" %f AMERICA(USD) = %f INDIAN(RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (3.67) * a;
            printf(" %f AMERICA(USD) = %f UAE(AED)\n\n", a, x);
            break;
        case 3:
            x = (4.24) * a;
            printf(" %f AMERICA(USD) = %f MALAYSIA(MYR)\n\n", a, x);
            break;
        case 4:
            x = (14370.00) * a;
            printf(" %f AMERICA(USD) = %f INDONESIA(IDR)\n\n", a, x);
            break;
        case 5:
            x = (1.36) * a;
            printf(" %f AMERICA(USD) = %f SINGAPORE(SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void MALAYSIA(float a) {
    int c;
    float x;
    printf("Choose the currency you want MALAYSIA to be converted to");
    printf("\n");
    printf("\n [1] INDIAN(RUPEES)");
    printf("\n [2] AMERICA(USD)");
    printf("\n [3] UAE(AED)");
    printf("\n [4] INDONESIA(IDR)");
    printf("\n [5] SINGAPORE(SGD)");
    printf("\n Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (17.54) * a;
            printf(" %f MALAYSIA(MYR) = %f INDIAN(RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (0.24) * a;
            printf(" %f MALAYSIA(MYR) = %f AMERICA(USD)\n\n", a, x);
            break;
        case 3:
            x = (0.87) * a;
            printf(" %f MALAYSIA(MYR) = %f UAE(AED)\n\n", a, x);
            break;
        case 4:
            x = (3389.15) * a;
            printf(" %f MALAYSIA(MYR) = %f INDONESIA(IDR)\n\n", a, x);
            break;
        case 5:
            x = (0.32) * a;
            printf(" %f MALAYSIA(MYR) = %f SINGAPORE(SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void INDONESIA(float a) {
    int c;
    float x;
    printf("Choose the currency you want INDONESIA to be converted to");
    printf("\n");
    printf("\n [1] INDIAN(RUPEES)");
    printf("\n [2] AMERICA(USD)");
    printf("\n [3] MALAYSIA(MYR)");
    printf("\n [4] UAE(AED)");
    printf("\n [5] SINGAPORE(SGD)");
    printf("\n Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (0.0052) * a;
            printf(" %f INDONESIA(IDR) = %f INDIAN(RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (0.000070) * a;
            printf(" %f INDONESIA(IDR) = %f AMERICA(USD)\n\n", a, x);
            break;
        case 3:
            x = (0.00029) * a;
            printf(" %f INDONESIA(IDR) = %f MALAYSIA(MYR)\n\n", a, x);
            break;
        case 4:
            x = (0.00026) * a;
            printf(" %f INDONESIA(IDR) = %f UAE(AED)\n\n", a, x);
            break;
        case 5:
            x = (0.000095) * a;
            printf(" %f INDONESIA(IDR) = %f SINGAPORE(SGD)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}

void SINGAPORE(float a) {
    int c;
    float x;
    printf("Choose the currency you want SINGAPORE to be converted to");
    printf("\n");
    printf("\n [1] INDIAN(RUPEES)");
    printf("\n [2] AMERICA(USD)");
    printf("\n [3] MALAYSIA(MYR)");
    printf("\n [4] INDONESIA(IDR)");
    printf("\n [5] UAE(AED)");
    printf("\n Enter any number from 1 to 5: ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            x = (54.60) * a;
            printf(" %f SINGAPORE(SGD) = %f INDIAN(RUPEES)\n\n", a, x);
            break;
        case 2:
            x = (0.73) * a;
            printf(" %f SINGAPORE(SGD) = %f AMERICA(USD)\n\n", a, x);
            break;
        case 3:
            x = (3.11) * a;
            printf(" %f SINGAPORE(SGD) = %f MALAYSIA(MYR)\n\n", a, x);
            break;
        case 4:
            x = (10549.11) * a;
            printf(" %f SINGAPORE(SGD) = %f INDONESIA(IDR)\n\n", a, x);
            break;
        case 5:
            x = (2.70) * a;
            printf(" %f SINGAPORE(SGD) = %f UAE(AED)\n\n", a, x);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}
