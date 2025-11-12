#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at end
void insert(struct Node** head, int value) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
}

// Display list
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int value;

    printf("Enter 3 numbers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &value);
        insert(&head, value);
    }

    printf("Linked list: ");
    display(head);
    return 0;
}
