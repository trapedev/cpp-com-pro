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
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i = 0; i < k; i++){
        q.push(p[i]);
    }
    for(int i = k - 1; i < n; i++){
        if(i == k - 1){
            cout << q.top() << endl;
        }else{
            if(q.top() < p[i]){
                q.pop();
                q.push(p[i]);
            }
            cout << q.top() << endl;
        }
    }
    return 0;
}