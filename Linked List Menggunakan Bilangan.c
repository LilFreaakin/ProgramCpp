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

void insertAtBeginning(Node** headRef, int data) {
    Node* newNode = createNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
    printf("Data %d inserted at the beginning of the linked list.\n", data);
}

void deleteAtBeginning(Node** headRef) {
    if (*headRef == NULL) {
        printf("Linked list is empty!\n");
        return;
    }
    int deletedData = (*headRef)->data;
    Node* deletedNode = *headRef;
    *headRef = (*headRef)->next;
    free(deletedNode);
    printf("Data %d deleted from the beginning of the linked list.\n", deletedData);
}

void clearList(Node** headRef) {
    Node* currentNode = *headRef;
    while (currentNode != NULL) {
        Node* deletedNode = currentNode;
        currentNode = currentNode->next;
        free(deletedNode);
    }
    *headRef = NULL;
    printf("Linked list cleared.\n");
}

void printList(Node* head) {
    Node* currentNode = head;
    printf("Linked list: ");
    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    int choice, data;
    while (1) {
        printf("Menu:\n");
        printf("1. Insert Depan\n");
        printf("2. Delete Depan\n");
        printf("3. Tampil Data\n");
        printf("4. Clear\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                deleteAtBeginning(&head);
                break;
            case 3:
                printList(head);
                break;
            case 4:
                clearList(&head);
                break;
            case 5:
                clearList(&head);
                printf("Exiting program.\n");	
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

//MUHAMMAD AFIIF YUNIARDHI
