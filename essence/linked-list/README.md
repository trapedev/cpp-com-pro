# 連結リスト
配列の苦手とする挿入・削除操作をともに`O(1)`の計算量で実行できる．

## 自己参照構造体
各ノードがポインタで連結されているようなデータ構造を実装する為に，自己参照構造体（自分自身の型へのポインタをメンバに持つ構造体）を定義する．連結リストの一つ一つのノードを，自己参照構造体のインスタンスで表す．
```
struct Node
{
    Node* next; //次のノードを指すか
    string name; //ノードに付随している値

    Node(string name_ = "") : next(NULL), name(name_) { }
};
```

## 連結リストの挿入操作と削除操作
### 挿入操作
「ある特定の要素の直後に他の要素を挿入する」操作は，ポインタを繋ぎかえることで操作操作を実現できる．
```
void insert(Node* v, Node* p){
    v->next = p->next;
    p->next = v;
}
```
具体的な処理は[こちら](https://github.com/KeiTaylor0606/CodingInterview/blob/main/essence/linked-list/insert.cpp)

### 削除操作
ある特定のノードを削除したいとき，削除したいノードの前のノードを取得する必要がある．ここで，双方向連結リスト（各ノードを繋ぐポインタが双方向）を定義する．次のノードへのポインタ`*next`だけでなく前のノードへのポインタ`*prev`を自己参照構造体に持たせる．
```
struct Node
{
    Node *prev, *next;
    string name;

    Node(string name_ = "") : prev(NULL), next(NULL), name(name_) { }
};
```
具体的な処理は[こちら](https://github.com/KeiTaylor0606/CodingInterview/blob/main/essence/linked-list/delete.cpp)

## 配列と連結リストの比較
| クエリ  |  配列  | 連結リスト | 
| ----------- | ---- | ---- |
| `i`番目の要素へのアクセス |  `O(1)`  | `O(N)` |
| 要素`x`を最後尾へ挿入 | `O(1)` | `O(1)` |
| 要素`x`を特定の要素の直後に挿入 | `O(N)` | `O(1)` |
| 要素`x`を削除 | `O(N)` | `O(1)` |
| 要素`x`を検索 | `O(N)` | `O(N)` |

## 参考文献・サイト
- [問題解決力を鍛える！アルゴリズムとデータ構造(著 大槻兼資/ 監修 秋葉拓哉)](https://www.amazon.co.jp/%E5%95%8F%E9%A1%8C%E8%A7%A3%E6%B1%BA%E5%8A%9B%E3%82%92%E9%8D%9B%E3%81%88%E3%82%8B-%E3%82%A2%E3%83%AB%E3%82%B4%E3%83%AA%E3%82%BA%E3%83%A0%E3%81%A8%E3%83%87%E3%83%BC%E3%82%BF%E6%A7%8B%E9%80%A0-KS%E6%83%85%E5%A0%B1%E7%A7%91%E5%AD%A6%E5%B0%82%E9%96%80%E6%9B%B8-%E5%A4%A7%E6%A7%BB-%E5%85%BC%E8%B3%87/dp/4065128447)