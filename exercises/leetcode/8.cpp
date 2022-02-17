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
    int myAtoi(string s) {
       if(s == ""){
           return 0;
       }
       int i = 0;
       long long ans = 0;
       int sign = 1;
       while (s[i] != '\0' && s[i] == ' '){
           i++;
       }
       if(s[i] == '-'){
           sign = -1;
           i++;
       }else if(s[i] == '+'){
           i++;
       }
       while (s[i] != '\0'){
           if(s[i] >= '0' && s[i] <= '9'){
               ans = 10*ans + s[i] - '0';
               if(ans > INT_MAX){
                   if(sign == 1){
                       return INT_MAX;
                   }else{
                       return INT_MIN;
                   }
               }
               i++;
           }else{
               break;
           }
       }
       ans *= sign;
       return (int)ans;
    }
};

void solve(){
    
}

int main(){
    
    return 0;
}