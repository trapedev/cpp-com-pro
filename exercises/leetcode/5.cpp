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
    string longestPalindrome(string s) {
        int max_len = 0, len = 0, len1 = 0, len2 = 0;
        int left = 0, right = 0;
        for(int i = 0; i < s.length(); i++)
        {
            len1 = palindrome(s, i, i);
            len2 = palindrome(s, i, i+1);
            len = max(len1, len2);
            if (len > max_len)
            {
                max_len = len;
                left = i - (len - 1)/2;
                right = i + len/2;
            }
                
        }
        return s.substr(left, max_len);
    }
    int palindrome (string s, int left, int right)
    {
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
                left--;
                right++;            
        }
        return right - left - 1;
    }
};

void solve(){

}

int main(){
    
    return 0;
}