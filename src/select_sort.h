#include <iostream>
#include <vector>

template<typename T>
static void select_sort(std::vector<T> &nums) {
  int n = nums.size();
  for (int i = 0; i < n; i ++ ) {
    int find = i;
    for (int j = i; j < n; j ++ ) {
      if (nums[find] > nums[j]) {
        find = j;
      }
    }
    if (find != i) {
      swap(nums[find], nums[i]);
    }
  }
}
