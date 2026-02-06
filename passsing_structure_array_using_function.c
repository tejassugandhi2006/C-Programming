#include <stdio.h>

struct student {
    char name[20];
    int id;
};

void display(struct student s[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Student %d -> Name: %s, ID: %d\n", i+1, s[i].name, s[i].id);
    } 
}

int main() {
    struct student students[3] = {
        {"Tejas", 136},
        {"Balaji", 110},
        {"Shreesh", 141}
    };

    display(students, 3);

    return 0;
}
