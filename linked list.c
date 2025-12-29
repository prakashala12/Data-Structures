#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create three nodes
    struct Node* first = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    // Assign data
    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    // Print list
    struct Node* temp = first;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}



