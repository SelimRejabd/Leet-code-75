#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
       stack<char> st;
       string str="";
       int size = s.size();
       for(int i=0; i<size; i++){
        if(s[i]=='*')
            st.pop();
        else{
            st.push(s[i]);
        }
       }
       while(!st.empty()){
        str += st.top();
        st.pop();
       }
       reverse(str.begin(), str.end());
       return str;


    }
};
int main() {
    Solution solution;
    string s;
    s="leet**cod*e";

    cout<<solution.removeStars(s);
}
