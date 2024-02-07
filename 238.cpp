#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int mul=1;
            for(int j=0; j<nums.size(); j++){
                if(i==j) continue;
                mul *= nums[j];
            }

            ans.push_back(mul);
        }
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
