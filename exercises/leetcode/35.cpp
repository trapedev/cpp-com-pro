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
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(n < 1) {
            return 0;
        }
        int low = 0;
        int high = n-1;
        int mid;
        int res;
        while(low <= high) {
            mid = low + (high-low)/2;
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] > target) {
                high = mid - 1;
                res = mid;
            }
            else {
                low = mid + 1;
                res = mid + 1;
            }
        }
        return res;
    }
};

void solve(){

}

int main(){
    
    return 0;
}