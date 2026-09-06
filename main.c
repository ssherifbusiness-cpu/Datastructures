#include "insertion_sort.h"
#include <stddef.h>
#include <stdio.h>

void print_nums(int nums[], size_t len);

int main() {
  int nums[] = {3, 2, 1, 6, 5, 4};
  size_t len = sizeof(nums) / sizeof(nums[0]);

  insertion_sort(nums, ASCENDING, len);
  print_nums(nums, len);
  return 0;
}

void print_nums(int nums[], size_t len) {
  printf("{");
  for (int i = 0; i < len; i++) {
    if (i == len - 1) {
      printf("%d", nums[i]);
    } else {
      printf("%d, ", nums[i]);
    }
  }
  printf("}\n");
}
