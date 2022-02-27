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
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    int cnt;
    bool judge = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i + 5) < n){
                cnt = 0;
                for(int k = 0; k < 6; k++){
                    if(s[i + k][j] == '#'){
                        cnt++;
                    }
                }
                if(cnt >= 4){
                    judge = true;
                }
            }
            if((j + 5) < n){
                cnt = 0;
                for(int k = 0; k < 6; k++){
                    if(s[i][j + k] == '#'){
                        cnt++;
                    }
                }
                if(cnt >= 4){
                    judge = true;
                }
            }
            if((j + 5) < n && (i + 5) < n){
                cnt = 0;
                for(int k = 0; k < 6; k++){
                    if(s[i + k][j + k] == '#'){
                        cnt++;
                    }
                }
                if(cnt >= 4){
                    judge = true;
                }
            }
            if((j + 5) < n && 0 <= (i - 5)){
                cnt = 0;
                for(int k = 0; k < 6; k++){
                    if(s[i - k][j + k] == '#'){
                        cnt++;
                    }
                }
                if(cnt >= 4){
                    judge = true;
                }
            }
        }
    }
    cout << (judge ? "Yes" : "No") << endl;
    return 0;
}