#ifndef LIST_H
#define LIST_H
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * _putchar - Function to write to std
 *
 */
void _putchar(char msg);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void free_list(list_t *head);

#endif
