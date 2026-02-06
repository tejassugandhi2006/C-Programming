#include <stdio.h>

struct Stud {
    int id;
    char name[20];
};

void display(struct Stud s[], int n) {
    for(int i = 0; i < n; i++)
        printf("ID: %d, Name: %s\n", s[i].id, s[i].name);
}

int main() {
    struct Stud s[3] = {{101, "Anu"}, {102, "Vasu"}, {103, "Kiran"}};
    display(s, 3);

    return 0;
}
