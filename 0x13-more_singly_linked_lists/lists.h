#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include "my_structs.h"

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif
