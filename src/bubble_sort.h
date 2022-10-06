#include <iostream>
#include <vector>

template <typename T>
static void bubble_sort(std::vector<T> &nums) {
  int n = nums.size();
  for (int i = 0; i < n; i ++ ) {
    for (int j = n - 1; j > i; j -- ) {
      if (nums[i] > nums[j]) {
        // std::swap(nums[i], nums[j]);
        swap(nums[i], nums[j]);
      }
    }
  }
}