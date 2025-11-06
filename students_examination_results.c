#include <stdio.h>

struct Student {
    char name[50];
    int regNumber;
    float marks;
};

int main() {
    FILE *file;
    struct Student student;

    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Student Records:\n");
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s, Marks: %.2f\n", student.name, student.marks);
    }

    fclose(file);
    return 0;
}