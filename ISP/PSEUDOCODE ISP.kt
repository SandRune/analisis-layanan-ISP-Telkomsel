FUNCTION main()
    CALL displayMainMenu()

FUNCTION displayMainMenu()
    PRINT "1. Super Seru"
    PRINT "2. Kouta Bulanan"
    PRINT "3. Kouta Mingguan"
    PRINT "4. Combo Skati & Lainnya"
    PRINT "Pilih opsi anda: "
    OPTION = GET_USER_INPUT()

    IF OPTION == 1 THEN
        CALL displaySuperSeruMenu()
    ELSE IF OPTION == 2 THEN
        CALL navigateToPurchasePage("Kouta Bulanan")
    ELSE IF OPTION == 3 THEN
        CALL navigateToPurchasePage("Kouta Mingguan")
    ELSE IF OPTION == 4 THEN
        CALL displayComboSaktiMenu()

FUNCTION displaySuperSeruMenu()
    PRINT "1. Paket Super Seru"
    PRINT "2. Gift"
    PRINT "3. Paket Lainnya"
    PRINT "9. Back"
    PRINT "Pilih opsi anda: "
    OPTION = GET_USER_INPUT()

    IF OPTION == 1 THEN
        CALL navigateToPurchasePage("Paket Super Seru")
    ELSE IF OPTION == 2 THEN
        CALL displayGiftMenu()
    ELSE IF OPTION == 3 THEN
        CALL displaySuperSeruLainnyaMenu()
    ELSE IF OPTION == 9 THEN
        CALL displayMainMenu()

FUNCTION displaySuperSeruLainnyaMenu()
    PRINT "1. Paket Super Seru"
    PRINT "9. Back"
    PRINT "Pilih opsi anda: "
    OPTION = GET_USER_INPUT()

    IF OPTION == 1 THEN
        CALL navigateToPurchasePage("Paket Super Seru")
    ELSE IF OPTION == 9 THEN
        CALL displayMainMenu()

FUNCTION displayGiftMenu()
    PRINT "Mau Gift ke nomer apa?"
    PHONE_NUMBER = GET_USER_INPUT()
    CALL navigateToPurchasePage("Gift to " + PHONE_NUMBER)

FUNCTION displayComboSaktiMenu()
    PRINT "1. Paket Combo Sakti"
    PRINT "2. Paket Lainnya"
    PRINT "9. Back"
    PRINT "Pilih opsi anda: "
    OPTION = GET_USER_INPUT()

    IF OPTION == 1 THEN
        CALL navigateToPurchasePage("Paket Combo Sakti")
    ELSE IF OPTION == 2 THEN
        CALL displayPaketLainnyaMenu()
    ELSE IF OPTION == 9 THEN
        CALL displayMainMenu()

FUNCTION displayPaketLainnyaMenu()
    PRINT "1. Paket Lainnya"
    PRINT "2. Paket Ketengan"
    PRINT "9. Back"
    PRINT "Pilih opsi anda: "
    OPTION = GET_USER_INPUT()

    IF OPTION == 1 THEN
        CALL navigateToPurchasePage("Paket Lainnya")
    ELSE IF OPTION == 2 THEN
        CALL navigateToPurchasePage("Paket Ketengan")
    ELSE IF OPTION == 9 THEN
        CALL displayMainMenu()

FUNCTION navigateToPurchasePage(packageName)
    PRINT "Terimakasih Sudah Membeli " + packageName + "!"
