# 0x13. C - More Singly Linked lists

This Project focuses on implementing and manipulating singly linked
lists.


## Learning Objectives

- Understand how to use linked lists  
- Develop the skill to find information independently

## Requirements

- Allowed editors: vi, vim, emacs  
- Compilation: Ubuntu using `gcc` with the options, `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Data Structure

The Following data structure has been used for this project:
```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Desciption: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
```
## Functions

### 1. 0-print_listint.c

- **Description:** Prints all elements of a `listint_t` list.  

### 2. 1-listint_len.c

- **Description:** Returns the number of elements in a `listint_t` list.

### 3. 2-add_nodeint.c

- **Description:** Adds a new node at the beginning of a `listint_t` list.

### 4. 3-add_nodeint_end.c

- **Description:** Adds a new node at the end of a `listint_t` list.

### 5. 4-free_listint.c

- **Description:** Frees a `listint_t` list and sets the head to NULL.

### 6. 5-free_listint2.c

- **Description:** Frees a `listint_t` list and sets the head to NULL.

### 7. 6-pop_listint.c

- **Description:** Deletes the head node of a `listint_t` list.

### 8. 7-get_nodeint.c

- **Description:** Returns the nth node of a `listint_t` list.

### 9. 8-sum_listint.c

- **Description:** Returns the sum of all data (`n`) of a `listint_t` list.

### 10. 9-insert_nodeint.c

- **Description:** Inserts a new node at a given position.

### 11. 10-delete_nodeint.c

- **Description:** Deletes a node at the index of a `listint_t` list.  

- All files adhere to the specified requirements and coding standards.  

Feel free to refer to individual function files for more detailed information. Happy coding!
