#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    const int n = nums.size();
    vector<int> ans(n);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    for (int i = 1; i < n; ++i)
      prefix[i] = prefix[i - 1] * nums[i - 1];

    for (int i = n - 2; i >= 0; --i)
      suffix[i] = suffix[i + 1] * nums[i + 1];

    for (int i = 0; i < n; ++i)
      ans[i] = prefix[i] * suffix[i];

    return ans;
  }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = solution.productExceptSelf(nums);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
