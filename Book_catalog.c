#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b1 = {101, "C Programming", "Dennis Ritchie"};
    struct Book b2 = {102, "Data Structures", "Mark Weiss"};
    struct Book b3 = {103, "Operating Systems", "Silberschatz"};

    
    printf("Book 1: ID %d, Title: %s, Author: %s\n", b1.id, b1.title, b1.author);
    printf("Book 2: ID %d, Title: %s, Author: %s\n", b2.id, b2.title, b2.author);
    printf("Book 3: ID %d, Title: %s, Author: %s\n", b3.id, b3.title, b3.author);

    return 0;
}