
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student1;

    student1.id = 1;
    
    snprintf(student1.name, sizeof(student1.name), "John Doe");
    student1.marks = 85.5f;

    printf("Student Id: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Marks: %.2f\n", student1.marks);

    return 0;
}
// ...existing code...