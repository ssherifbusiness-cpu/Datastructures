#include "bubble_sort.h"
void swap(int nums[], int x, int y);

void bubble_sort(int nums[], size_t len) {
  for (int i = 0; i < len; i++) {
    for (int j = len - 1; j > i; j--) {
      if (nums[j] < nums[j - 1]) {
        swap(nums, j, j - 1);
      }
    }
  }
}

void swap(int nums[], int x, int y) {
  int temp = nums[x];
  nums[x] = nums[y];
  nums[y] = temp;
}
