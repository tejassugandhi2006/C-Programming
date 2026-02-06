#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push(struct Node **top, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if(newNode == NULL) {
        printf("Stack Overflow\n");
        return;
    }

    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

int pop(struct Node **top) {
    if(*top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }

    struct Node *temp = *top;
    int value = temp->data;
    *top = temp->next;
    free(temp);

    return value;
}

void display(struct Node *top) {
    printf("Stack: ");
    while(top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main() {
    struct Node *top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    display(top);

    printf("Popped: %d\n", pop(&top));
    display(top);

    return 0;
}
