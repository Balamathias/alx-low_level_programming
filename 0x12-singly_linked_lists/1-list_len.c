#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @mb_h: pointer to the list_t list
 *
 * Return: number of elements in mb_h
 */
size_t list_len(const list_t *mb_h)
{
 size_t n = 0;

 while (mb_h)
 {
 n++;
 mb_h = mb_h->next;
 }
 return (n);
}

