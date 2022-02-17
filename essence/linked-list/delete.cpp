#include <bits/stdc++.h>
using namespace std;

//双方向への自己参照構造体の定義
struct Node
{
    Node *prev, *next;
    string name;

    Node(string name_ = "") : prev(NULL), next(NULL), name(name_) { }
};

//番兵を表すノードをグローバル領域に置いておく
Node* nil;

//初期化
void init() {
    nil = new Node();
    nil->prev = nil;
    nil->next = nil;
}

//連結リストの出力
void printList() {
    Node* cur = nil->next; //先頭から
    for(; cur != nil; cur = cur->next){
        cout << cur->name << " -> ";
    }
    cout << endl;
}

//ノードpの直後にノードvを挿入
void insert(Node* v, Node* p = nil) {
    v->next = p->next;
    p->next->prev = v;
    p->next = v;
    v->prev = p;
}

//ノードvの削除
void erase(Node* v) {
    if(v == nil){ //vが番兵でない場合，何もしない
        return;
    }
    v->prev->next = v->next;
    v->next->prev = v->prev;
    delete v; //メモリを解放
}


int main() {
    //初期化
    init();

    //作りたいノードの一覧
    //最後のノードから順番に挿入することに注意
    vector<string> names = {"yamamoto", "watanabe", "ito", "takahashi", "suzuki", "sato"};

    //連結リストの作成：各ノードを生成して連結リストの先頭に挿入していく
    Node *watanabe;
    for(int i = 0; i < (int)names.size(); i++){
        //ノードの作成
        Node* node = new Node(names[i]);

        //作成したノードを連結リストの先頭に挿入
        insert(node);

        //「渡辺」ノードを保持
        if(names[i] == "watanabe"){
            watanabe = node;
        }
    }

    //「渡辺」ノードの削除
    cout << "before: ";
    printList(); //削除前
    erase(watanabe);
    cout << "after: ";
    printList(); //削除後
    return 0;
}