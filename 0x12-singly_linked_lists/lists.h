#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: (malloc'ed string)
 * @len: Length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX  project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif
