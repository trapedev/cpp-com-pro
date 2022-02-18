#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000; //キュー配列の最大サイズ

int qu[MAX]; //キューを表す配列
int tail = 0; //キューの要素区間を表す変数
int head = 0;

//キューの初期化
void init() {
    head = tail = 0;
}

//キューが空かどうかを判定する
bool isEmpty() {
    return (head == tail);
}

//キューがいっぱいか判定する
bool isFull() {
    return (head == (tail + 1)%MAX);
}

// enqueue
void enqueue(int x) {
    if(isFull()){
        cout << "error: queue is full." << endl;
        return;
    }
    qu[tail] = x;
    tail++;
    if(tail == MAX){
        tail = 0; //リングバッファの終端に来たら0
    }
}

//dequeue
int dequeue() {
    if(isEmpty()){
        cout << "error: queue is empty." << endl;
        return -1;
    }
    int res = qu[head];
    head++;
    if(head == MAX){
        head = 0; //リングバッファの終端に来たら0
    }
    return res;
}

int main() {
    return 0;
}