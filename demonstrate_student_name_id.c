#include <stdio.h>

struct student {
    char name[20];
    int id;
};

int main() {
    struct student s1 = {"Raj", 1};
    struct student s2 = {"Vasu", 2};

    printf("Student 1 Name: %s, ID: %d\n", s1.name, s1.id);
    printf("Student 2 Name: %s, ID: %d\n", s2.name, s2.id);

    return 0;
}
