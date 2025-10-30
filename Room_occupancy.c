#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int i, j;
    int occupiedCount, vacantCount;

    printf("Simulating random occupancy data...\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // Generates either 0 or 1
        }
    }
    for (i = 0; i < 5; i++) {
        occupiedCount = 0;
        vacantCount = 0;
        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupiedCount, vacantCount);
    }

    return 0;
}
