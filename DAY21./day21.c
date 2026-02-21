#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, i, num;

    struct node *head = NULL;   
    struct node *newnode, *temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &num);

        // allocate memory
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = num;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;   
        }
        else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;   
            }
            temp->next = newnode;   
        }
    }

    printf("Linked List is: ");
    temp = head;

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}