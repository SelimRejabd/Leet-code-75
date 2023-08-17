#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, water=0, right=height.size()-1;

        while(left<right){
                int l = height[left], r = height[right];
            water = max(water, min(l, r)*(right - left));

            if(l < r)
                left++;
            else
                right --;
        }
        cout<<water;
    }
};

int main() {
    vector <int> height;
    height = {1,8,6,2,5,4,8,3,7};
    Solution solution;
    solution.maxArea(height);
}
