#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000; //スタック配列の最大のサイズ

int st[MAX]; //スタックを表す配列
int top = 0; //スタックの先頭を表す添字

//スタックの初期化
void init() {
    top = 0; //スタックの添字を初期位置に
}

//スタックが空かどうかの判定
bool isEmpty() {
    return (top == 0); //スタックサイズが0かどうか
}

//スタックがいっぱいかどうか
bool isFull() {
    return (top == MAX); //スタックサイズがMAXかどうか
} 

//push
void push(int x) {
    if(isFull()){
        cout << "error: stack is full." << endl;
        return;
    }
    st[top] = x; //xを格納して
    top++; //topを進める
}

//pop
int pop() {
    if(isEmpty()){
        cout << "error: stack is empty." << endl;
        return -1;
    }
    top--; //topをデクリメント
    return st[top]; //topの位置にある要素を返却
}

int main(){
    
    return 0;
}