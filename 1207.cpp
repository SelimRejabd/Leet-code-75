#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector <int> result;
        sort(arr.begin(), arr.end());
        int i=0;

        while(i<arr.size()){
                int count = 1;
            for(int j =i+1; j<arr.size(); j++){
                if (arr[i]==arr[j]){
                    count++;
                }
                else
                break;
            }
            result.push_back(count);
            i += count;
        }
        sort(result.begin(), result.end());
        for(int j=0; j<result.size()-1; j++){
            if(result[j]==result[j+1]){
                cout<<"false";
                return false;
            }
        }
        cout<<"true";
        return true;
    }
};

int main(){
    vector<int> arr;
    arr = {1,2,2,1,3};
    Solution solution;
    solution.uniqueOccurrences(arr);
}


