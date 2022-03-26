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

vector<bool> used(2222);
int main(){
    int n;
    cin >> n;
    while (true)
    {
        for(int i = 1; i <= 2*n + 1; i++){
            if(!used[i]){
                cout << i << endl;
                used[i] = true;
                break;
            }
        }
        int res;
        cin >> res;
        if(res == 0){
            break;
        }
        used[res] = true;
    }
    return 0;
}