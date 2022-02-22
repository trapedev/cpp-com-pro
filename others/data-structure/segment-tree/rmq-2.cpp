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
    int n;
    vector<T> dat, lazy;
    RMQ(int n_) : n(), dat(n_*4, INF), lazy(n_*4, INF){
        int x = 1;
        while (n_ > x)
        {
            x *= 2;
            n = x;
        }

        void eval(int k){
            if(lazy[k] == INF){ //更新するｔものが無ければ終了
                return;
            }
            if(k < n - 1){ //葉でなければ子に伝搬
                lazy[k*2 + 1] = lazy[k];
                lazy[k*2 + 2] = lazy[k];
            }
            // 自身を更新
            dat[k] = lazy[k];
            lazy[k] = INF;
        }
        
        void update(int a, int b, T x, int k, int l, int r){
            eval(k);
            if(a <= l && r <= b){ //完全に内側の場合
                lazy[k] = x;
                eval(k);
            }else if(a < r && l < b){ //一部区間が被る場合
                update(a, b, x, k*2 + 1, l, (l + r)/2); //左の子
                update(a, b, x, k*2 + 2, (l + r)/2, r); //右の子
                dat[k] = min(dat[k*2 + 1], dat[k*2 + 2]);
            }
        }
        void update(int a, int b, T x){
            return update(a, b, x, 0, 0, n);
        }

        T query_sub(int a, int b, int k, int l, int r){
            eval(k);
            if(r <= a || b <= l){ //完全に外側の場合
                return INF;
            }else if(a <= l && r <= b){ //完全に内側の場合
                return dat[k];
            }else{ //一部区間が被る場合
                T vl = query_sub(a, b, k*2 + 1, l, (l + r)/2);
                T vr = query_sub(a, b, k*2 + 2, (l + r)/2, r);
                return min(vl, vr);
            }
        }
        T query(int a, int b){
            return query_sub(a, b, 0, 0, n);
        }

        inline T operator[](int a){
            return query(a, a + 1);
        }
        void print() {
            for(int i = 0; i < 2*n - 1; i++){
                cout << (*this)[i];
                if(i != n){
                    cout << ",";
                }
            }
            cout << endl;
        }
    }
};
