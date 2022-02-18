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

bool solve(string s, string t){
    int len = s.length();
    for(int i = 0; i < 26; i++){
        string u = s;
        for(int j = 0; j < len; j++){
            u[j] = (u[j] - 'a' + i)%26 + 'a';
        }
        if(u == t){
            return true;
        }
    }
    return false;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << (solve(s, t) ? "Yes" : "No") << endl;
    return 0;
}