#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtStart(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtIndex(Node** head, int data, int index) {
    if (index == 0) {
        insertAtStart(head, data);
        return;
    }
    Node* temp = *head;
    for (int i = 0; i < index - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) return;
    Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtStart(Node** head) {
    if (*head == NULL) return;
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtEnd(Node** head) {
    if (*head == NULL) return;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    Node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteAtIndex(Node** head, int index) {
    if (index == 0) {
        deleteAtStart(head);
        return;
    }
    Node* temp = *head;
    for (int i = 0; i < index - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) return;
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
}

void displayList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    insertAtStart(&head, 10);
    insertAtEnd(&head, 20);
    insertAtIndex(&head, 15, 1);
    displayList(head);

    deleteAtStart(&head);
    displayList(head);

    deleteAtEnd(&head);
    displayList(head);

    deleteAtIndex(&head, 0);
    displayList(head);

    return 0;
}
