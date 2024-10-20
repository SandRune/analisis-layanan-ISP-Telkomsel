#include <stdio.h>

void displayMainMenu();
void displaySuperSeruMenu();
void displaySuperSeruLainnyaMenu();
void displayGiftMenu();
void displayComboSaktiMenu();
void displayPaketLainnyaMenu();
void navigateToPurchasePage(const char* packageName);

int main() {
    displayMainMenu();
    return 0;
}

void displayMainMenu() {
    int option;
    do {
        printf("\n--- Main Menu ---\n");
        printf("1. Super Seru\n");
        printf("2. Kouta Bulanan\n");
        printf("3. Kouta Mingguan\n");
        printf("4. Combo Skati & Lainnya\n");
        printf("Pilih opsi anda: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                displaySuperSeruMenu();
                break;
            case 2:
                navigateToPurchasePage("Kouta Bulanan");
                break;
            case 3:
                navigateToPurchasePage("Kouta Mingguan");
                break;
            case 4:
                displayComboSaktiMenu();
                break;
            default:
                printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (option < 1 || option > 4);
}

void displaySuperSeruMenu() {
    int option;
    do {
        printf("\n--- Super Seru Menu ---\n");
        printf("1. Paket Super Seru\n");
        printf("2. Gift\n");
        printf("3. Paket Lainnya\n");
        printf("9. Back\n");
        printf("Pilih opsi anda: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                navigateToPurchasePage("Paket Super Seru");
                break;
            case 2:
                displayGiftMenu();
                break;
            case 3:
                displaySuperSeruLainnyaMenu();
                break;
            case 9:
                return;
            default:
                printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (option < 1 || option > 3 && option != 9);
}

void displaySuperSeruLainnyaMenu() {
    int option;
    do {
        printf("\n--- Paket Super Seru Lainnya ---\n");
        printf("1. Paket Super Seru\n");
        printf("9. Back\n");
        printf("Pilih opsi anda: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                navigateToPurchasePage("Paket Super Seru");
                break;
            case 9:
                return;
            default:
                printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (option < 1 || option != 9);
}

void displayGiftMenu() {
    char phoneNumber[15];
    printf("Mau Gift ke nomer apa? ");
    scanf("%s", phoneNumber);
    navigateToPurchasePage(phoneNumber);
}

void displayComboSaktiMenu() {
    int option;
    do {
        printf("\n--- Combo Sakti Menu ---\n");
        printf("1. Paket Combo Sakti\n");
        printf("2. Paket Lainnya\n");
        printf("9. Back\n");
        printf("Pilih opsi anda: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                navigateToPurchasePage("Paket Combo Sakti");
                break;
            case 2:
                displayPaketLainnyaMenu();
                break;
            case 9:
                return;
            default:
                printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (option < 1 || option > 2 && option != 9);
}

void displayPaketLainnyaMenu() {
    int option;
    do {
        printf("\n--- Paket Lainnya Menu ---\n");
        printf("1. Paket Lainnya\n");
        printf("2. Paket Ketengan\n");
        printf("9. Back\n");
        printf("Pilih opsi anda: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                navigateToPurchasePage("Paket Lainnya");
                break;
            case 2:
                navigateToPurchasePage("Paket Ketengan");
                break;
            case 9:
                return;
            default:
                printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (option < 1 || option > 2 && option != 9);
}

void navigateToPurchasePage(const char* packageName) {
    printf("Terimakasih Sudah Membeli %s!\n", packageName);
}
