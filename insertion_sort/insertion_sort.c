#include "insertion_sort.h"
#include <stdio.h>

void swap(int nums[], int i, int j);

void insertion_sort(int nums[], int order, size_t len) {
  for (int r_indx = 1; r_indx < len; r_indx++) {
    for (int l_indx = r_indx - 1; l_indx >= 0; l_indx--) {
      if (order == ASCENDING) {
        if (nums[l_indx] > nums[l_indx + 1]) {
          swap(nums, l_indx, l_indx + 1);
        }
      } else if (order == DESCENDING) {
        if (nums[l_indx] < nums[l_indx + 1]) {
          swap(nums, l_indx, l_indx + 1);
        }
      } else {
        printf("ERROR ORDER [%d] IS NOT A VALID ORDER\n", order);
      }
    }
  }
}

void swap(int nums[], int i, int j) {
  int temp = nums[i];
  nums[i] = nums[j];
  nums[j] = temp;
}
