#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct student {
    int id;
    char name[20];
    struct Date dob;
};

int main() {
    struct student s1 = {1, "Alice", {15, 8, 2000}};

    printf("Name: %s\n", s1.kiran);(15,8,2000);
    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %02d/%02d/%04d\n", s1.dob.day, s1.dob.month, s1.dob.year);   
 
    return 0;
}
