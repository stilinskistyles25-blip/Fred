#include <stdio.h>

int main() {
    int units;
    float total;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        total = units * 20;
    } else if (units <= 60) {
        total = units * 25;
    } else {
        total = units * 30;
    }

    printf("Total water bill: %.2f KES\n", total);

    return 0;
}