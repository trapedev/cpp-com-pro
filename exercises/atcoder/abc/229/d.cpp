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
    string s;
    int k;
    cin >> s >> k;
    int len = s.size();
    vector<int> cnt(len + 1);
    for(int i = 0; i < len; i++){
        if(s[i] == '.'){
            cnt[i + 1] = cnt[i] + 1;
        }else{
            cnt[i + 1] = cnt[i]; 
        }
    }

    int ans = -1;
    int right = 0;
    for(int left = 0; left < len; left++){
        while (right < len && cnt[right + 1] - cnt[left] <= k)
        {
            right++;
        }
        ans = max(ans, right - left);
    }
    cout << ans << endl;
    return 0;
}