#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct node {
    char item[50];
    struct node *next;
};

// Function prototypes
bool is_empty(struct node *head);
struct node* push(char item[], struct node *head);
void add_kware(struct node **head, int *stack_size);
void wash_kware(struct node **head);
void top_kware(struct node **head);
void washAll_kware(struct node **head);

int main() {
    int option;
    int stack_size = 0;
    struct node *head = NULL;

    // Menu-driven loop
    do {
        printf("Kitchenware Washing Machine\n\n[1]Add Kitchenware\n[2]Wash Kitchenware\n[3]Top Kitchenware\n[4]Wash All\n[0]Exit\n\nEnter Choice: ");
        scanf("%d", &option);

        switch(option) {
            case 0:
                // Free allocated memory before exiting
                while (head != NULL) {
                    struct node *temp = head;
                    head = head->next;
                    free(temp);
                }
                exit(0);
            case 1:
                add_kware(&head, &stack_size);
                break;
            case 2:
                wash_kware(&head);
                break;
            case 3:
                top_kware(&head);
                break;
            case 4:
                washAll_kware(&head);
                break;
            default:
                printf("Error! Option Undefined.\n");
        }

    } while(option != 0);
    return 0;
}

// Pushes a new item onto the stack
struct node* push(char item[], struct node *head) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL) {
        exit(1); // Indicate failure
    }
    strcpy(temp->item, item);
    temp->next = head;
    head = temp;
    return head;
}

// Checks if the stack is empty
bool is_empty(struct node *head) {
    return head == NULL;
}

// Adds a kitchenware item to the stack
void add_kware(struct node **head, int *stack_size) {
    char kware[50];

    if (*stack_size >= 5) {
        printf("Stack is FULL. Cannot Add Kitchenware.\n");
        return;
    }

    printf("Enter a kitchenware: ");
    scanf("%s", kware);
    *head = push(kware, *head);

    (*stack_size)++;
}

// Displays the next kitchenware item to be washed
void top_kware(struct node **head) {
    if (is_empty(*head)) {
        printf("The STACK is EMPTY. No kitchenware to wash.\n");
        return;
    }
    printf("[%s] is next to be washed\n", (*head)->item);
}

// Removes and washes the topmost kitchenware item
void wash_kware(struct node **head) {
    if (is_empty(*head)) {
        printf("The STACK is EMPTY. No kitchenware to wash.\n");
        return;
    }
    struct node *temp = *head;
    *head = (*head)->next;
    printf("[%s] is being washed.\n", temp->item);
    free(temp);
}

// Washes all kitchenware items in the stack
void washAll_kware(struct node **head) {
    struct node *current = *head;

    if (is_empty(*head)) {
        printf("The STACK is EMPTY. No kitchenware to wash.\n");
        return;
    }

    while (current != NULL) {
        struct node *temp = current;
        current = current->next;
        free(temp);
        printf("All the kitchenware has been washed.\n");
    }
    *head = NULL; 
}
