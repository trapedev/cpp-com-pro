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
    ll n;
    string s;
    cin >> n >> s;
    deque<ll> a = {n};
    for(ll i = n - 1; i >= 0; i--){
        if(s[i] == 'L'){
            a.push_back(i);
        }else{
            a.push_front(i);
        }
    }
    for(ll i = 0; i <= n; i++){
        if(i < n){
            cout << a[i] << " ";
        }else{
            cout << a[i] << endl;
        }
    }
    return 0;
}