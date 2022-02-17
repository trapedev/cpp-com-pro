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
    int reverse(int x) {
        int ret = 0;
        while (x != 0) {
            if (abs(ret) > 214748364) return 0;
            ret = ret * 10 + x % 10;
            x /= 10;
        }
        return ret;
    }
};

void solve(){

}

int main(){
    
    return 0;
}