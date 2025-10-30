#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1 represents occupied, 0 represents vacant.
    int chain[3][5][10];
    int i, j, k;
    int totalOccupied =0;
    srand(time(NULL));
    printf("Assigning random occupancy to each room...\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2; // 0 or 1
                if (chain[i][j][k] == 1) {
                    totalOccupied++;
                }
            }
        }
    }
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}

