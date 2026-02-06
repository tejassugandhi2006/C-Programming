#include <stdio.h>
int main() 
{
    float m1, m2, m3, total, average;
    char grade;
    printf("Enter marks for three subjects (out of 100): ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3;

    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f", average);

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else if (average >= 50)
        grade = 'E';
    else
        grade = 'F';

    printf("\nGrade = %c\n", grade);
    return 0;
}
