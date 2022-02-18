import java.util.EmptyStackException;

public class MyStack<T> {
    private static class StackNode<T> {
        private T data;
        private StackNode<T> next;

        public StackNode(T data){
            this.data = data;
        }
    }

    private StackNode<T> top;

    public T pop(){ //スタックの一番上からデータを削除
        if(top == null) {
            throw new EmptyStackException();
        }
        T item = top.data;
        top = top.next;
        return item;
    }

    public void push(T item){ //スタックの一番上に要素itemを追加
        StackNode<T> t = new StackNode<T>(item);
        t.next = top;
        top = t;
    }

    public T peek() {
        if(top == null){ //スタックの一番上の要素を返却
            throw new EmptyStackException();
        }
        return top.data;
    }

    public boolean isEmpty() { //スタックが空の場合にのみtrueを返却
        return top == null;
    }
}
