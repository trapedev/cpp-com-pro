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
    string convert(string s, int numRows) {
        if(numRows == 1){
        return s;
    }
    int step = 2*numRows - 2;
    string ans;
    for(int i = 0; i < numRows; i++){
        for(int j = i; j < s.length(); j+=step){
            ans.push_back(s[j]);
            if(0 < i && i < numRows - 1 && j + step - 2*i < s.length()){
                ans.push_back(s[j + step - 2*i]);
            }
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