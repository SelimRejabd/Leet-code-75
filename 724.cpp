#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int prefix = 0;

        for(int i=0; i<nums.size(); i++){
            if(prefix == sum - prefix - nums[i]){
                return i;
            }
            prefix += nums[i];
        }
        return -1;
    }
};
int main() {
    Solution solution;

    vector<int> nums1 = {1, 7, 3, 6, 5, 6};
    cout << "Pivot Index: " << solution.pivotIndex(nums1) << std::endl;

    vector<int> nums2 = {1, 2, 3};
    cout << "Pivot Index: " << solution.pivotIndex(nums2) << std::endl;
    return 0;
}
