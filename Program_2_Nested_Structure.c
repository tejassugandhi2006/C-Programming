#include <stdio.h>

struct Date {
    int day;
    int mon;
    int yr;
};

struct Student {
    int id;
    char name[20];
    struct Date dob;
};

int main() {
    struct Student s1 = {101, "Kiran", {15, 8, 2000}};

    printf("Name: %s\n", s1.name);
    printf("DOB: %d-%d-%d\n", s1.dob.day, s1.dob.mon, s1.dob.yr);

    return 0;
}
