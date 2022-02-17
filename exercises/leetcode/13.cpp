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
    int romanToInt(string s) {
        unordered_map<char, int> CI = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = CI[s.back()];
        for(int i = s.size() - 2; i >= 0; i--){
            if(CI[s[i]] < CI[s[i + 1]]){
                ans -= CI[s[i]];
            }else{
                ans += CI[s[i]];
            }
        }
        return ans;
    }
};

void solve(){

}

int main(){
    
    return 0;
}