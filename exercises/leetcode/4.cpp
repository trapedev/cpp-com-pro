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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        if(size%2 == 0){
            return (double)(nums1[(size/2) - 1] + nums1[(size/2)])/2;
        }else{
            return (double)nums1[(size/2)];
        }
    }
};

/*
これ速い
https://github.com/zqfang/LeetCode/blob/master/C%2B%2B/median-of-two-sorted-arrays.cpp
*/

void solve(){

}

int main(){
    
    return 0;
}