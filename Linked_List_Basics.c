#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int insert_at_beginning(node **, int);
int insert_at_end(node **, int);
int insert_at_position(node **, int, int);
int delete_at_beginning(node **);
int delete_at_end(node **);
int delete_at_position(node **, int);
void display(node *);
int reverse(node **);
int menu();

int menu ()
{
    int ch;
    printf("\n1. Insert at beginning");
    printf("\n2. Insert at end");
    printf("\n3. Insert at position");
    printf("\n4. Delete at beginning");
    printf("\n5. Delete at end");
    printf("\n6. Delete at position");
    printf("\n7. Display");
    printf("\n8. Reverse");
    printf("\n9. Exit");
    printf("\n Enter your choice:");
    scanf("%d", &ch);
    return ch;
}

int main()
{
    node *head = NULL;  // Initialize head inside the main function
    int data, pos;
    
    while (1)
    {
        switch (menu())
        {
        case 1:
            printf("\n Enter the number to insert:");
            scanf("%d", &data);
            insert_at_beginning(&head, data);
            break;
        case 2:
            insert_at_end(&head, 20);
            break;
        case 3:
            insert_at_position(&head, 30, 2);
            break;
        case 4:
            delete_at_beginning(&head);
            break;
        case 5:
            delete_at_end(&head);
            break;
        case 6:
            delete_at_position(&head, 2);
            break;
        case 7:
            display(head);
            break;
        case 8:
            reverse(&head);
            break;
        case 9:
            exit(0);
        }
    }

    return 0;
}
int insert_at_beginning(node **head, int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}


int insert_at_end(node **head, int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
    }

    else
    {
        node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}


void display(node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int reverse(node **head)
{
    node *current = *head;
    node *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int insert_at_position(node **head, int data, int pos)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    if (pos == 1)
    {
        new_node->next = *head;
        *head = new_node;
    }
    else
    {
        node *temp = *head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

int delete_at_beginning(node **head)
{
    if (*head == NULL)
    {
        printf("\n List is empty");
    }
    else
    {
        node *temp = *head;
        *head = (*head)->next;
        free(temp);

    }
}

int delete_at_end(node **head)
{
    if (*head == NULL)
    {
        printf("\n List is empty");
    }
    else if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        node *temp = *head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int delete_at_position(node **head, int pos)
{
    if (*head == NULL)
    {
        printf("\n List is empty");
    }
    else if (pos == 1)
    {
        delete_at_beginning(head);
    }
    else
    {
        node *temp = *head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        node *temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }

}
