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

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = a; i <= b; i++){
        bool judge = true;
        for(int j = c; j <= d; j++){
            if(isPrime(i + j)){
                judge = false;
            }
        }
        if(judge){
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
}