#include <iostream>
#include <vector>

using namespace std;

template <typename T>
static bool is_sort(std::vector<T> &nums) {
  for (int i = 1; i < nums.size(); i ++ ) {
    if (nums[i] < nums[i - 1]) {
      return false;
    }
  }
  return true;
}
