#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - linked list
 * @n: integer
 * @next: next node
 *
 * Description: linked list structure 
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void radix_sort(int *array, size_t size);

#endif /* SORT */
