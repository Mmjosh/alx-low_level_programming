# 0x13. C - More Singly Linked lists

This Project focuses on implementing and manipulating singly linked
lists.


## Learning Objectives

-Understand how to use linked lists
-Develop the skill to find information independently

## Requirements

-Allowed editors: vi, vim, emacs  
-Compilation: Ubuntu using `gcc` with the options, `-Wall -Werror -Wextra -pedantic -std=gnu89`

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

### 1. `0-print_listint.c`

-**Description:** Prints all elements of a `listint_t` list.

Feel free to refer to individual function files for more detailed information. Happy coding!
