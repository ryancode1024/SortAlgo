#include <iostream>
#include <algorithm>
#include <vector>
// #include "src/sort_algo.h"

using namespace std;

int main(int arvc, char *argv[]) {
  vector<int> nums = {1, 4, 3, 93, 2};
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i ++ ) {
    std::cout << nums[i] << std::endl;
  }
  return 0;
}