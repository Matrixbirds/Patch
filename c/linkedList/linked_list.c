#include "linked_list.h"

void each_list(const linked_list_ptr *head) {
  linked_list_ptr tmp = *head;
  while (tmp != NULL) {
    printf("%s\n", tmp->data);
    tmp = tmp->next;
  }
}

void init_list_from_array(linked_list_ptr *ptr, const char *arr[], const int size) {
  linked_list_ptr cur = NULL;
  for (int i = 0; i < size; i++) {
    linked_list_ptr tmp = (linked_list_ptr) malloc (sizeof(linked_list_ptr));
    tmp->data = arr[i];
    tmp->next = NULL;
    if (!cur) {
      *ptr = cur = tmp;
    }
    else {
      cur->next = tmp;
      cur = cur->next;
    }
  }
}
