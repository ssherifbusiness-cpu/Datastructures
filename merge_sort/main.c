#include "merge_sort.h"
#include <stddef.h>
#include <stdio.h>

void print_output(int nums[], size_t len);

int main() {
  int nums[] = {3, 4, 1, 5, 6, 2};
  int len = sizeof(nums) / sizeof(nums[0]);
  printf("Before:\n");
  print_output(nums, len);
  merge_sort(nums, 0, len - 1);
  printf("After:\n");
  print_output(nums, len);
}

void print_output(int nums[], size_t len) {
  printf("\t{");
  for (int i = 0; i < len; i++) {
    i != len - 1 ? printf("%d,", nums[i]) : printf("%d", nums[i]);
  }
  printf("}\n");
}
