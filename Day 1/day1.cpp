#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compute(vector<int>nums, int k) {
    std::sort(nums.begin(), nums.end());
    
    int r = 0;
    int l = nums.size() - 1;
    while (r < l) {
        if (nums[r] + nums[l] == k) {
            return true;
        } else if (nums[r] + nums[l] < k) {
            r += 1;
        } else {
            l -= 1;
        }
    }
    return false;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int target = 6;
    cout << compute(numbers, target) << endl;
    return 0;
}