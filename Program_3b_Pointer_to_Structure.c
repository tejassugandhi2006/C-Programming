#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s = {101, "Anu"};
    struct Student *ptr = &s;

    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);

    return 0;
}
