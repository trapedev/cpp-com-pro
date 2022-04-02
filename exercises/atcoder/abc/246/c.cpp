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
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ans += a[i];
    }
    ll dcn = 0;
    for(int i = 0; i < n; i++){
        dcn += a[i]/x;
    }
    dcn = min(dcn, k);
    ans -= dcn*x;
    k -= dcn;
    for(int i = 0; i < n; i++){
        a[i] %= x;
    }
    sort(a.begin(), a.end());
    for(int i = n - 1; i >= 0; i--){
        if(k == 0){
            break;
        }
        ans -= a[i];
        k--;
    }
    cout << ans << endl;
    return 0;
}