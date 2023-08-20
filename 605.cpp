#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        for(int i=0; i<size; i++){

            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==size-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                n--;
            }

        }
        if(n>0){
            return false;
        }
        return true;
    }
};

int main() {
    vector <int> flowerbed;
    int n=1;
    flowerbed = {0,0,1,0,0};
    Solution solution;
    cout<<solution.canPlaceFlowers(flowerbed, n);
}
