Linked List Operations in C
This repository contains a comprehensive implementation of a singly linked list in C, complete with various operations and a user-friendly menu system. The following functions showcase the core functionality of the linked list:

Functions:
1. insert_at_beginning
Description:

Inserts a new node with the specified data at the beginning of the linked list.
Parameters:

node **head: Double pointer to the head of the linked list.
int data: Data value to be inserted.
2. insert_at_end
Description:

Inserts a new node with the specified data at the end of the linked list.
Parameters:

node **head: Double pointer to the head of the linked list.
int data: Data value to be inserted.
3. insert_at_position
Description:

Inserts a new node with the specified data at a user-defined position in the linked list.
Parameters:

node **head: Double pointer to the head of the linked list.
int data: Data value to be inserted.
int pos: Position at which the data should be inserted.
4. delete_at_beginning
Description:

Deletes the node at the beginning of the linked list.
Parameters:

node **head: Double pointer to the head of the linked list.
5. delete_at_end
Description:

Deletes the node at the end of the linked list.
Parameters:

node **head: Double pointer to the head of the linked list.
6. delete_at_position
Description:

Deletes the node at a user-defined position in the linked list.
Parameters:

node **head: Double pointer to the head of the linked list.
int pos: Position of the node to be deleted.
Returns:

bool: Returns true if deletion is successful, false otherwise.
7. display
Description:

Displays the elements of the linked list.
Parameters:

node *head: Pointer to the head of the linked list.
8. reverse
Description:

Reverses the linked list in place.
Parameters:

node **head: Double pointer to the head of the linked list.
9. menu
Description:

Displays a user-friendly menu for interacting with various linked list operations.
Returns:

int: The user's menu choice.
How to Use:
Clone the repository to your local machine.
Compile the code using a C compiler.
Run the executable and follow the on-screen menu to perform various linked list operations.
