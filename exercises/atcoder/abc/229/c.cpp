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
    int n, w;
    cin >> n >> w;
    vector<P> ab(n);
    for(int i = 0; i < n; i++){
        cin >> ab[i].first >> ab[i].second;
    }
    sort(ab.rbegin(), ab.rend());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll x = min(w, ab[i].second);
        ans += x*ab[i].first;
        w -= x;
    }
    cout << ans << endl;
    return 0;
}