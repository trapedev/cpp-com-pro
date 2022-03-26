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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1), b(n + 1); // 1 index
    vector<bool> dp1(n + 1), dp2(n + 1); 
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(ll i = 1; i <= n; i++){
        cin >> b[i];
    }
    dp1[1] = dp2[1] = true;
    for(ll i = 2; i <= n; i++){
        if(dp1[i - 1]){
            if(abs(a[i - 1] - a[i]) <= k){
                dp1[i] = true;
            }
            if(abs(a[i - 1] - b[i]) <= k){
                dp2[i] = true;
            }
        }
        if(dp2[i - 1]){
            if(abs(b[i - 1] - a[i]) <= k){
                dp1[i] = true;
            }
            if(abs(b[i - 1] - b[i]) <= k){
                dp2[i] = true;
            }
        }
    }

    if(dp1[n] || dp2[n]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl; 
    }
    return 0;
}