#include <bits/stdc++.h>
using namespace std;
/*
RMQ:区間[0, n)について，区間ごとの最小値を管理する構造体
update(i, x): i番目の要素をxに更新．O(log(n))
query(a, b): 区間[a, b)での最小の要素を取得．O(log(n))
*/
template <typename T>
struct RMQ
{
    const T INF = numeric_limits<T>::max();
    int n;         //葉の数
    vector<T> dat; //完全二分木の配列

    RMQ(int n_) : n(), dat(n_*4, INF) { //葉の数は2^xの形
        int x = 1;
        while (n_ > x)
        {
            x *= 2;
        }
        n = x;
    }

    void update(int i, T x){
        i += n - 1;
        dat[i] = x;
        while (i > 0)
        {
            i = (i - 1)/2;
            dat[i] = min(dat[i*2 + 1], dat[i*2 + 2]);
        }
    }

    //区間[a, b)の最小値の取得
    T query(int a, int b){
        return query_sub(dat[i*2 + 1], dat[i*2 + 2]);
    }

    T query_sub(int a, int b, int k, int l, int r){
        if(r <= a || b <= l){
            return INF;
        }else if(a <= l && r <= b){
            return dat[k];
        }else{
            T vl = query_sub(a, b, k*2 + 1, l, (l + r)/2);
            T vr = query_sub(a, b, k*2 + 2, (l + r)/2, r);
            return min(vl, vr);
        }
    }
};
