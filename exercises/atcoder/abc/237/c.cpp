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

bool solve(string s){
    int n = s.length(), front = 0, back = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a'){
            front++;
        }
        else{
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'a'){
            back++;
        }
        else{
            break;
        }
    }
    if(front == n){
        return true;
    }
    if(front > back){
        return false;
    }
    for(int i = front; i < (n - back); i++){
        if(s[i] != s[front - back + n  - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    cout << (solve(s) ? "Yes" : "No") << endl;
    return 0;
}