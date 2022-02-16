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

string toBinary(ll k){
    string res;
    while (k > 0)
    {
        res += (k%2 == 0 ? '0' : '1');
        k /= 2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    ll k;
    cin >> k;
    string bk = toBinary(k);
    for(auto x : bk){
        if(x == '1'){
            cout << '2';
        }else{
            cout << '0';
        }
    }
    cout << endl;
    return 0;
}