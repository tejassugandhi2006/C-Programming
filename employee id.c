#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e1 = {101, "Rahul", 45000.50};

    printf("Employee ID: %d\n", e1.id);
    printf("Employee Name: %s\n", e1.name);
    printf("Employee Salary: %.2f\n", e1.salary);

    return 0;
}
