#include <iostream>
#include <algorithm>
#include <vector>
#include "../src/sort_algo.h"

using namespace std;

int main(int args, const char *argv[]) {
  // vector<int> nums = {1, 4, 3, 93, 2};
  vector<int> nums;
  nums.push_back(1);
  nums.push_back(4);
  nums.push_back(3);
  nums.push_back(93);
  nums.push_back(2);

  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size(); i ++ ) {
    std::cout << nums[i] << std::endl;
  }
  return 0;
}