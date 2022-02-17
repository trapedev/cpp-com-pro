#include <bits/stdc++.h>
using namespace std;

//自己参照構造体
struct Node
{
    Node* next; //次のノードを指すか
    string name; //ノードに付随している値

    Node(string name_ = "") : next(NULL), name(name_) { }
};

//番兵を表すノードをグローバル領域に置いておく
Node* nil;

//初期化
void init() {
    nil = new Node();
    nil->next = nil;
}

//連結リストの表示
void printList() {
    Node* cur = nil->next; //先頭から
    for(; cur != nil; cur = cur->next){
        cout << cur->name << " -> ";
    }
    cout << endl;
}

//ノードpの直後にノードvを挿入する
//ノードpのデフォルト引数をnilとしておく
//そのためinsert(v)を呼び出す操作は，リストの先頭への挿入を表す．
void insert(Node* v, Node* p = nil){
    v->next = p->next;
    p->next = v;
}


int main() {
    //初期化
    init();

    //作りたいノードの名前一覧
    //最後のノードから順に挿入する事に注意
    vector<string> names = {"yamamoto", "watanabe", "ito", "takahashi", "suzuki", "sato"};

    //各ノードを生成して，連結リストの先頭に挿入していく．
    for(int i = 0; i < (int)names.size(); i++){
        //ノードを生成する
        Node* node = new Node(names[i]);

        //作成したノードを連結リストの先頭に挿入
        insert(node);

        //各ステップの連結リストの様子を出力
        cout << "step " << i << ": ";
        printList();
    }
    return 0;
}