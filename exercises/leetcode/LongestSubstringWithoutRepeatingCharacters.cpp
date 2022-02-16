#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
#define IntToStr(n) to_string(n) //整数を文字列に変換
#define StrToInt(s) stoi(s) //文字列を整数に変換 
#define rev(s) reverse(s.begin(), s.end()) //文字列反転
#define out(n) cout << n << endl

using ll = long long;
using namespace std;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

const ll mod = 1e9 + 7;
const int INF = 1000000001;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> chars(128);
        int left = 0;
        int right = 0;
        int MAX = 0;
        while (right < s.length()) {
            char r = s[right];
            chars[r]++;
            while (chars[r] > 1) {
                char l = s[left];
                chars[l]--;
                left++;
            }
            MAX = max(MAX, right - left + 1);
            right++;
        }
        return MAX;
    }
};

int main(){
    
    return 0;
}