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

vector<vector<int>> a;
int n;
int ans;

void solve(vector<bool> s, int x){
    int si = -1;
    for(int i = 0; i < 2*n; i++){
        if(!s[i]){
            si = i;
            break;
        }
    }
    if(si == -1){
        ans = max(ans, x);
        return;
    }

    s[si] = true;
    for(int i = 0; i < 2*n; i++){
        if(!s[i] && si != i){
            s[i] = true;
            solve(s, x^a[si][i]);
            s[i] = false;
        }
    }
}

int main(){
    cin >> n;
    a = vector<vector<int>>(2*n, vector<int>(2*n));
    for(int i = 0; i < 2*n; i++){
        for(int j = i + 1; j < 2*n; j++){
            cin >> a[i][j];
            a[j][i] = a[i][j];
        }
    }
    vector<bool> s(2*n);
    solve(s, 0);
    cout << ans << endl;
    return 0;
}