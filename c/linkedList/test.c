#include <stdio.h>
#include "linked_list.h"

int main()
{
  linked_list_ptr head = NULL;
  const char *arr[] = {"a", "b", "c", "d", "e"};
  sizeof(arr)/sizeof(char*);
  init_list_from_array(&head, arr, 5);
  each_list(&head);
  return 0;
}
