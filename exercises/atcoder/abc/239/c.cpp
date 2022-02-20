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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    vector<int> dx = {-1, -1, 1, 1, -2, -2, 2, 2};
    vector<int> dy = {-2,  2,-2, 2, -1,  1,-1, 1};
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            int X1 = x1 + dx[i];
            int Y1 = y1 + dy[i];
            int X2 = x2 + dx[j];
            int Y2 = y2 + dy[j];
            if(X1 == X2 && Y1 == Y2){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}