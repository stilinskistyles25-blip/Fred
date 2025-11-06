#include <stdio.h>

// Function to get input from user and store in "input.txt"
void getInput() {
    FILE *inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error opening input.txt for writing.\n");
        return;
    }
    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(inputFile, "%d ", num);
    }
    fclose(inputFile);
}

// Function to calculate sum and average, write to "output.txt"
void processInput() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files for processing.\n");
        return;
    }
    int num, sum = 0;
    int count = 0;
    while (fscanf(inputFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    float average = (float)sum / count;
    fprintf(outputFile, "Sum: %d\nAverage: %.2f", sum, average);
    fclose(inputFile);
    fclose(outputFile);
}

// Function to display contents of "input.txt" and "output.txt"
void displayContents() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "r");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files for display.\n");
        return;
    }
    printf("\nContents of input.txt:\n");
    int num;
    while (fscanf(inputFile, "%d", &num) == 1) {
        printf("%d ", num);
    }
    printf("\n\nContents of output.txt:\n");
    char line[100];
    while (fgets(line, sizeof(line), outputFile)) {
        printf("%s", line);
    }
    fclose(inputFile);
    fclose(outputFile);
}

int main() {
    getInput();
    processInput();
    displayContents();
    return 0;
}