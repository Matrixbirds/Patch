#include <stdio.h>
#include <stdlib.h>
#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

typedef struct linked_list *linked_list_ptr;

struct linked_list {
  char *data;
  struct linked_list *next;
};
void each_list(const linked_list_ptr *);
void init_list_from_array(linked_list_ptr *, const char *arr[], const int size);

#endif
