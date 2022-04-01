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
（重複のない）集合を管理するデータ構造=> set : https://qiita.com/bestfitat/items/84b8750ba87cd2ab2633
*/

const ll mod = 1e9 + 7;
const int INF = 1000000001;

void solve(){

}

int main(){
    int N, M;
    cin >> N >> M;
    Graph G(N);
    for(int i = 0; i < M; i++){
        int A, B;
        cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    /*
    各頂点が何手目に探索されたか
    -1は「まだ探索されていない」ことを表す
    */
    vector<int> dist(N, -1);

    /*
    k手目に探索された頂点集合を格納（最大でもN-1手まで）
    */
    vector<vector<int>> nodes(N);

    /*
    頂点0を始点とする
    */
    dist[0] = 0;
    nodes[0] = {0};

    /*
    k手目の探索をする
    */
    for(int k = 1; k < N; k++){
        //k-1手目に探索された各頂点vに対して
        for(auto v : nodes[k - 1]){
            //頂点vから1手で行ける頂点next_vを探索
            for(auto next_v : G[v]){
                //頂点next_vが探索済みであれば何もしない
                if(dist[next_v] != -1){
                    continue;
                }
                //頂点next_vを探索する
                dist[next_v] = dist[v] + 1;
                nodes[k].push_back(next_v);
            }
        }
    }
    return 0;
}