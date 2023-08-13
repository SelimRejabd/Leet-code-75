#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int j=nums.size()-2; j>=0;j--){
            for (int i=nums.size()-2; i>=0;i--){
            if(nums[i]==0){
                swap(nums[i], nums[i+1]);
            }
            }
        }
    }
};

int main(){

    vector <int> nums;
    nums = {0,1,0,3,12};
    Solution solution;
    solution.moveZeroes(nums);

    cout<<"Result: ";

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i];
    }
}
