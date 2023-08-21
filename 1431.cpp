#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> bl;
        int max = *max_element(candies.begin(), candies.end());
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= max){
                bl.push_back(true);
            }
            else bl.push_back(false);
        }
        return bl;
    }
};

int main()
{
    vector <int> candies;
    int ex=3;
    candies = {2,3,5,1,3};
    Solution solution;
    vector<bool> bl = solution.kidsWithCandies(candies, ex);
    for(int i=0; i<bl.size(); i++){
        cout<<bl[i];
    }

}
