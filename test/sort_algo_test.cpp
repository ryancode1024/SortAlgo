#include <algorithm>
#include <iostream>
#include <vector>
#include <time.h>
#include "sort_algo.h"
#include "bubble_sort.h"
#include "select_sort.h"

using namespace std;

int main(int args, const char *argv[]) {
  srand(time(nullptr));

  vector<int> nums;
  for (int i = 0; i < 50000; i ++ ) {
    nums.push_back((int)rand());
  }
  printf("before sort...");
  time_t start, end;

  start = time(nullptr);
  bubble_sort(nums);
  end = time(nullptr);

  printf("run time : %ld\n", end - start);
  
  printf("is nums sorted: %s\n", is_sort(nums) ? "true" : "false");
  
  return 0;
}