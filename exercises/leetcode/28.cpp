#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (n); i++)
#define IntToStr(n) to_string(n) //整数を文字列に変換
#define StrToInt(s) stoi(s) //文字列を整数に変換 
#define rev(s) reverse(s.begin(), s.end()) //文字列反転
#define out(n) cout << n << endl

using ll = long long;
using namespace std;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

const ll mod = 1e9 + 7;
const int INF = 1000000001;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int Nlen = needle.size();
        int Hlen = haystack.size();
        if (haystack.size() < Nlen){
            return -1;
        }
        for (int i = 0; i <= Hlen - Nlen; i++){
            if (string (haystack.begin() + i, haystack.begin() + i + Nlen) == needle){
                return i;
            }
        }
        return -1;
    }
};

void solve(){

}

int main(){
    
    return 0;
}