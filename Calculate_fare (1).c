#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50; // KSh. 50 per km
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}