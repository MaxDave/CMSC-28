#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char item[50];
    float amount;
    struct Node *next;
};

// Function prototypes
void fall_inline(struct Node **head);
void serve(struct Node **head);
void next_customer(struct Node **head);
void closing_time(struct Node **head);

int main() {
    int option;
    float amount;
    struct Node *head = NULL; // Initialize queue

    // Main menu loop
    do {
        printf("[Boycott MCDO] Counter 2:\n\n[1]Fall in Line\n[2]Serve Customer\n[3]Next Customer\n[4]Closing Time\n[0]Exit\n\nEnter Choice: ");
        scanf("%d", &option);

        switch(option) {
            case 0:
                // Free allocated memory and exit
                while (head != NULL) {
                    struct Node *temp = head;
                    head = head->next;
                    free(temp);
                }
                printf("The checkout system has been terminated. Thank you!\n");
                exit(0);
            case 1:
                fall_inline(&head); // Input the name of the customer and the amount to be paid 
                break;
            case 2:
                serve(&head); // Serve the next customer
                break;
            case 3:
                next_customer(&head); // Display details of the next customer
                break;
            case 4:
                closing_time(&head); // Close the checkout system, serving remaining customers
                break;
            default:
                printf("Error! Option Undefined.\n");
        }

    } while(option != 0);

    return 0;
}

// Function to add a customer to the end of the queue
void fall_inline(struct Node **head) {
    char name[50];
    float amount;
    struct Node *temp = *head;
    struct Node *newline = (struct Node *)malloc(sizeof(struct Node)); // Allocate memory for new node

    // Check if memory allocation was successful
    if (newline == NULL) {
        exit(1); // Exit program indicating failure
    }

    // Prompt user for name and amount
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Total amount to be paid: ");
    scanf("%f", &amount);

    // Assign values to the new node
    strcpy(newline->item, name);
    newline->amount = amount;
    newline->next = NULL;

    // If the queue is empty, new node becomes the head
    if (*head == NULL) {
        *head = newline;
    } else {
        // Otherwise, add new node at the end of the queue
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newline;
    }
}

// Function to serve the next customer in the queue
void serve(struct Node **head) {
    if (*head == NULL) {
        printf("No customer to serve.\n");
        return;
    }
    // Serve the next customer and free memory
    struct Node *temp = *head;
    *head = (*head)->next;
    printf("Now serving %s with total amount payable of %.2f\n", temp->item, temp->amount);
    free(temp);
}

// Function to display details of the next customer in the queue
void next_customer(struct Node **head) {
    if (*head == NULL) {
        printf("No customer in line.\n");
        return;
    }
    // Display details of the next customer
    printf("Next order: For %s with total amount payable of %.2f\n", (*head)->item, (*head)->amount);
}

// Function to close the checkout system, serving remaining customers
void closing_time(struct Node **head) {
    if (*head == NULL) {
        printf("The QUEUE is EMPTY. No customer/s to serve.\n");
        return;
    }

    printf("Closing time! Serving remaining customers...\n");

    // Serve each remaining customer and free memory
    struct Node *current_customer;
    while (*head != NULL) {
        current_customer = *head;
        *head = (*head)->next;
        printf("Now serving %s with total amount payable of %.2f\n", current_customer->item, current_customer->amount);
        free(current_customer);
    }

    printf("All customers have been served. Thank you!\n");
}
