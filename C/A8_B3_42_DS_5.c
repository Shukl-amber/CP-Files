#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coeff;
    int expo;
    struct Node* next;
} Node;

Node* newNode(int coeff, int expo) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->coeff = coeff;
    node->expo = expo;
    node->next = NULL;
    return node;
}

void insertEnd(Node** head, int coeff, int expo) {
    Node* node = newNode(coeff, expo);
    if (*head == NULL) {
        *head = node;
        return;
    }
    Node* temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = node;
}

void printPoly(Node* head) {
    while (head) {
        printf("%dx^%d", head->coeff, head->expo);
        if (head->next)
            printf(" + ");
        head = head->next;
    }
    printf("\n");
}

Node* addPoly(Node* p1, Node* p2) {
    Node* result = NULL;
    while (p1 && p2) {
        if (p1->expo > p2->expo) {
            insertEnd(&result, p1->coeff, p1->expo);
            p1 = p1->next;
        } else if (p1->expo < p2->expo) {
            insertEnd(&result, p2->coeff, p2->expo);
            p2 = p2->next;
        } else {
            insertEnd(&result, p1->coeff + p2->coeff, p1->expo);
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    while (p1) {
        insertEnd(&result, p1->coeff, p1->expo);
        p1 = p1->next;
    }
    while (p2) {
        insertEnd(&result, p2->coeff, p2->expo);
        p2 = p2->next;
    }
    return result;
}

int main() {
    Node* poly1 = NULL;
    Node* poly2 = NULL;

    insertEnd(&poly1, 2, 2);
    insertEnd(&poly1, 3, 1);
    insertEnd(&poly1, 4, 0);

    insertEnd(&poly2, 3, 5);
    insertEnd(&poly2, 2, 2);
    insertEnd(&poly2, 3, 0);

    printf("Polynomial 1: ");
    printPoly(poly1);
    printf("Polynomial 2: ");
    printPoly(poly2);

    Node* poly3 = addPoly(poly1, poly2);
    printf("Resultant Polynomial: ");
    printPoly(poly3);

    return 0;
}
