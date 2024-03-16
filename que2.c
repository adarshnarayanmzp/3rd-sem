#include <stdio.h>
struct Student {
    char name[50];
    int rollNo;
    int marks[5];
    float percentage;
};

int main() {
    struct Student student;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", student.name);
    printf("Roll No: ");
    scanf("%d", &student.rollNo);

    printf("Enter marks for each subject (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
    }
    int totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += student.marks[i];
    }
    student.percentage = (float)totalMarks / 5;

    printf("\n");
    printf("Student Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll No: %d\n", student.rollNo);
    printf("Percentage: %.2f%%\n", student.percentage);

    return 0;
}

