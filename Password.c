#include <stdio.h>
#include <string.h>

int main() {
    char password[50];

    do {
        printf("Enter the password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n");
        } else {
            printf("Access Granted\n");
        }
    } while (strcmp(password, "1234") != 0);

    return 0;
}
