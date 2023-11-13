# 0x12. C - Singly Linked Lists

Welcome to the "Singly Linked Lists" directory! This collection of C functions is designed to provide a set operations for efficient linked list implementations.

## Learning Objectives

- When and why using linked lists vs arrays  
- How to build and use linked lists  

## Requirements

- Allowed editor: `vi`, `vim`, `emacs`  
- All files have been compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`  
- The code uses `Betty` coding style for C.  
- Prototypes for all functions have been included in the header file `lists.h`  

## More info

- The following data structure has been used for this project:  
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

## Functions

### 1. 0-print_list.c

- **Description:** Prints all the elements of a `list_t` list and returns the number of nodes.

### 2. 1-list_len.c

- **Description:** Returns the number of elements in a linked `list_t` list.

### 3. 2-add_node.c

- **Description:** Adds a new node at the beginning of a `list_t` list, in this function `str` is duplicated using `strdup`,  
- Function returns the address of the new element, or `NULL` if it failed.

### 4. 3-add_node_end.c

- **Description:** Function adds a new node at the end of a `list_t` list.  
- `str` is duplicated and the function returns the address of the new element, or `NULL` if it failed.

### 5. 4-free_list.c

- **Description:** Frees a `list_t` list.  

## Yo!

- I hope this functions serve you well in your programming endeavors. Feel free to contribute, suggest improvements, or report issues. Happy coding!
