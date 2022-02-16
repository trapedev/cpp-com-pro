#include <bits/stdc++.h>

using ll = long long;
using namespace std;
using P = pair<int, int>;
//using Graph = vector<vector<int>>;

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

void solve(vector<bool> s, int x){
    
}

int main(){
    int n;
    cin >> n;
    vector<bool> c(360, false);
    c[0] = true;
    int x = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        x += a;
        x %= 360;
        c[x] = true;
    }
    int ans = 0;
    int cur = 0;
    for(int i = 0; i <= 360; i++){
        if(c[i%360]){
            ans = max(ans, cur);
            cur = 0;
        }
        cur++;
    }
    cout << ans << endl;
    return 0;
}