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

void solve(){

}

int main(){
    int n, q;
    cin >> n >> q;
    map<int, vector<int>> mp;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mp[a].push_back(i + 1);
    }
    for(int i = 0; i < q; i++){
        int x, k;
        cin >> x >> k;
        if(k <= mp[x].size()){
            cout << mp[x][k - 1] << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}