#include "merge_sort.h"
void merge(int nums[], int start, int mid, int end);

void merge_sort(int nums[], int start, int end) {
  if (start >= end) {
    return;
  }
  int mid = (start + end) / 2;
  merge_sort(nums, start, mid);
  merge_sort(nums, mid + 1, end);
  merge(nums, start, mid, end);
}

void merge(int nums[], int start, int mid, int end) {
  int l_curr = start;
  int l_end = mid;
  int r_curr = mid + 1;
  int r_end = end;
  int arr_len = end - start + 1;

  int temp_nums[end - start];

  for (int i = 0; i < arr_len; i++) {

    if (l_curr > l_end) {
      temp_nums[i] = nums[r_curr++];
    } else if (r_curr > r_end) {
      temp_nums[i] = nums[l_curr++];
    } else {
      if (nums[l_curr] > nums[r_curr]) {
        temp_nums[i] = nums[r_curr++];
      } else {
        temp_nums[i] = nums[l_curr++];
      }
    }
  }

  for (int i = 0; i < arr_len; i++) {
    nums[i + start] = temp_nums[i];
  }
}
