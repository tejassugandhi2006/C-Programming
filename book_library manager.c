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
    struct Book books[3] = {b1, b2, b3};

    // Print all book details
    printf("--- Book Catalog ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d: ID %d, Title: %s, Author: %s\n", i + 1, books[i].id, books[i].title, books[i].author);
    }

    // Search functionality
    int searchID, found = 0;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchID);
    for (int i = 0; i < 3; i++) {
        if (books[i].id == searchID) {
            found = 1;
            printf("\n--- Book Found ---\n");
            printf("Book ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            break;
        }
    }
    if (!found) {
        printf("\nBook not found in the record.\n");
    }

    return 0;
}