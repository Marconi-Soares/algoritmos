#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *current = NULL;

void printList(){
    struct Node *p = head;
    printf("\n[");

    while (p != NULL){
        printf(" %d", p->data);
        p = p->next;
    }

    printf("]");
}

void insertAtBegin(int data){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link->data = data;

    link->next = head;
    head = link;
}

void insertAtEnd(int data){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link->data = data;
    struct Node *linkedList = head;

    while (linkedList->next != NULL){
        linkedList = linkedList->next;
    }
    linkedList->next = link;
}
void insertAfterNode(struct Node *list, int data){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link->data = data;
    link->next = list->next;
    list->next = link;
}

void deleteAtBegin(){
    head = head->next;
}

void deleteAtEnd(){
    struct Node *linkedList = head;

    while (linkedList->next->next != NULL){
        linkedList = linkedList->next;
    }
    linkedList->next = NULL;
}

void deleteNode(int key){
    struct Node *temp = head;
    struct Node *prev;

    if (temp != NULL && temp->data == key) {
        head = temp->next;
        return;
    }

    while (temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    prev->next = temp->next;
}

int searchList(int key){
    struct Node *temp = head;
    while (temp != NULL){
        if (temp->data == key){
            return 1;
        }
        temp = temp->next;
    }

    return 0;
}

int main(void){
    int k=0;
    insertAtBegin(12);
    insertAtBegin(22);
    insertAtEnd(30);
    insertAtEnd(44);
    insertAtBegin(50);
    insertAfterNode(head->next->next, 33);
    printf("Linked List: ");

    printList();

    deleteAtBegin();
    deleteAtEnd();
    deleteNode(12);
    printf("\nLinked List after deletion: ");

    printList();

    insertAtBegin(4);
    insertAtBegin(16);
    printf("\nUpdated Linked List: ");
    printList();

    k = searchList(16);

    printf("%s", searchList(16) == 1
           ? "Element is found" 
           : "Element is not present in the list");
}
