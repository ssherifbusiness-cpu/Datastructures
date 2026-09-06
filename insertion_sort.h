#include <stddef.h>

enum sort_order {
  ASCENDING,
  DESCENDING,
};

void insertion_sort(int nums[], int order, size_t len);
