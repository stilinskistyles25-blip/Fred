#include <stdio.h>

int main() {
    float hours, rate;
    float gross_pay, tax, net_pay;

    // Input from user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours <= 40) {
        gross_pay = hours * rate;
    } else {
        float overtime_hours = hours - 40;
        gross_pay = (40 * rate) + (overtime_hours * rate * 1.5);
    }

    // Calculate tax
    if (gross_pay <= 600) {
        tax = 0.15 * gross_pay;
    } else {
        tax = (0.15 * 600) + (0.20 * (gross_pay - 600));
    }

    // Calculate net pay
    net_pay = gross_pay - tax;

    // Output results
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}