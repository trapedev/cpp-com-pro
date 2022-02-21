#include <bits/stdc++.h>

using ll = long long;
using namespace std;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

#define rep(i,n) for(int i = 0; i < (n); i++)
#define IntToStr(n) to_string(n) //整数を文字列に変換
#define StrToInt(s) stoi(s) //文字列を整数に変換 
#define rev(s) reverse(s.begin(), s.end()) //文字列反転
#define out(n) cout << n << endl

/*
queue: https://cpprefjp.github.io/reference/queue/queue.html
stack: https://cpprefjp.github.io/reference/stack.html
permutation: https://cpprefjp.github.io/reference/algorithm/next_permutation.html
*/

const ll mod = 1e9 + 7;
const int INF = 1000000001;

void solve(){

}

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    vector<vector<bool>> dp(n + 1, vector<bool>(x + 1, false));
    dp[0][0] = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < x + 1; j++){
            if(dp[i][j]){
                if(j + a[i] <= x){
                    dp[i + 1][j + a[i]] = true;
                }
                if(j + b[i] <= x){
                    dp[i + 1][j + b[i]] = true;
                }
            }
        }
    }
    cout << (dp[n][x] ? "Yes" : "No") << endl;
    return 0;
}