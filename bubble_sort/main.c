#include "bubble_sort.h"
#include <stdio.h>

void print_arr(int nums[], size_t len);

int main() {
  int nums[] = {4, 2, 6, 1, 5, 3};
  size_t len = sizeof(nums) / sizeof(nums[0]);
  bubble_sort(nums, len);
  print_arr(nums, len);
  return 0;
}

void print_arr(int nums[], size_t len) {
  printf("{");
  for (int i = 0; i < len; i++) {
    i == len - 1 ? printf("%d}\n", nums[i]) : printf("%d,", nums[i]);
  }
}
