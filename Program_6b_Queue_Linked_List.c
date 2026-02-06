#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void enqueue(struct Node **front, struct Node **rear, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(*rear == NULL) {
        *front = *rear = newNode;
    } else {
        (*rear)->next = newNode;
        *rear = newNode;
    }
}

int dequeue(struct Node **front, struct Node **rear) {
    if(*front == NULL) {
        printf("Queue Underflow\n");
        return -1;
    }

    struct Node *temp = *front;
    int value = temp->data;

    *front = (*front)->next;
    if(*front == NULL)
        *rear = NULL;

    free(temp);
    return value;
}

void display(struct Node *front) {
    printf("Queue: ");
    while(front != NULL) {
        printf("%d ", front->data);
        front = front->next;
    }
    printf("\n");
}

int main() {
    struct Node *front = NULL, *rear = NULL;

    enqueue(&front, &rear, 5);
    enqueue(&front, &rear, 10);
    enqueue(&front, &rear, 15);

    display(front);

    printf("Dequeued: %d\n", dequeue(&front, &rear));
    display(front);

    return 0;
}
