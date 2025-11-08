#include<stdio.h>
int main(){
char name[20];
int age;
float marks;
printf("Enter name/n, age and marks");
scanf("%s %d %f , name,age,&marks");
printf("Name: %s\nAge: %d\nmarks: %2f",name,age,marks);
return 0;
}