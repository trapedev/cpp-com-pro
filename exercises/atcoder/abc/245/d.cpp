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
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), b(m + 1), c(n + m + 1);
    for(int i = 0; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 0; i <= n + m; i++){
        cin >> c[i];
    }
    for(int i = m; i >= 0; i--){
        b[i] = c[i + n] / a[n];
        for(int j = 0; j <= n; j++){
            c[i + j] -= b[i]*a[j];
        }
    }
    for(int i = 0; i < m; i++){
        cout << b[i] << " ";
    }
    cout << b[m] << endl;
    return 0;
}