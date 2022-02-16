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

bool solve(string s1, string s2){
    map<char, int> mp1, mp2;
    if(s1.length() != s2.length()){
        return false;
    }
    for(int i = 0; i < s1.length(); i++){
        mp1[s1[i]]++;
    }
    for(int i = 0; i < s2.length(); i++){
        mp2[s2[i]]++;
    }
    for(auto x : mp1){
        if(mp2[x.first] != x.second){
            return false;
        }
    }
    return true;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << solve(s1, s2) << endl;
    return 0;
}