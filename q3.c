#include <stdio.h>
struct Student {
    char name[100];
    int age;
    float gpa;
};
int main() {
    struct Student student;
    struct Student *ptr = &student;   
    printf("Enter student information:\n");  
    printf("Name: ");
    gets(ptr->name); 
    printf("Age: ");
    scanf("%d", &(ptr->age));   
    printf("GPA: ");
    scanf("%f", &(ptr->gpa)); 
    printf("\nStudent information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("GPA: %.2f\n", ptr->gpa);  
    return 0;
}

