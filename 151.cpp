#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
       string word;
       string ans;
       int i=0;
       int size = s.size();

       while(i<size){
            string word = "";

            while(s[i]==' ' && i<size){
                i++;
            }
            while(s[i] != ' ' && i<size){
                word += s[i];
                i++;
            }
            if(word.size()>0){
                if(ans.size()==0){
                    ans = word;
                }
                else{
                    ans = word + " " + ans;
                }
            }
       }
    cout<<ans;

    }
};
int main() {
    string s = "  hello     world   ";
    Solution solution;
    solution.reverseWords(s);
}

