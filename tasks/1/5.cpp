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

bool judge(string s1, string s2){
    int i = 0;
    int j = 0;
    while (i < s1.length() && j < s2.length())
    {
        if(s1[i] != s2[j]){
            if(i != j){
                return false;
            }
            j++;
        }else{
            i++;
            j++;
        }
    }
    return true;
}

bool solve(string s1, string s2){
    if(s1.length() == s2.length()){
        int cnt = 0;
        for(int i = 0; i < s1.length(); i++){
            if(s1[i] != s2[i]){
                cnt++;
                if(cnt > 1){
                    return false;
                }
            }
        }
        return true;
    }else if(s1.length()+1 == s2.length() || s1.length() == s2.length()+1){
        if(s1.length() > s2.length()){
            return judge(s2, s1);
        }else{
            return judge(s1, s2);
        }
    }
    return false;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << solve(s1, s2) << endl;
    return 0;
}