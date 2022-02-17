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
    double rec(double x, long n){
        if(n == 0){
            return 1.0;
        }
        if(n == 1){
            return x;
        }
        if(n < 0){
            return rec(1/x, -n);
        }
        double ans = rec(x*x, n/2);
        if(n&1){
            return ans*x;
        }
        else{
            return ans;
        }
    }
    double myPow(double x, int n){
        return rec(x, n);
    }
};

void solve(){

}

int main(){
    
    return 0;
}