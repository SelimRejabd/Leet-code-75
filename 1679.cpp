#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution{
public:
    int maxOperations(vector <int> &nums, int k){
        int i=0, j=nums.size()-1,  count = 0;
        sort(nums.begin(), nums.end());
        while(i<j){
                int sum = nums[i]+nums[j];
            if(k == sum){
                count++;
                i++;
                j--;
            }
            else if(k < sum){
                j--;
            }
            else{
                i++;
            }
        }

        cout<<count;
    }
};

int main(){
    vector <int> nums;
    int k = 6;
    nums = {3,1,3,4,3};
    Solution solution;
    solution.maxOperations(nums, k);
}
