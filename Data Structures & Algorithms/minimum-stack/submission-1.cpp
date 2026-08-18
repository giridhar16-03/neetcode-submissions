class MinStack {
public:
    public MinStack() {
    mainStack = new Stack<int>();
    minStack = new Stack<int>();
}

public void Push(int val) {
    if (!(mainStack.Count > 0)) {
        minStack.Push(val);
        mainStack.Push(val);
    } else {
        mainStack.Push(val);
        if (minStack.Peek() > val) {
            minStack.Push(val);
        } else {
            minStack.Push(minStack.Peek());
        }
    }
}

public void Pop() {
    minStack.Pop();
    mainStack.Pop();
}

public int Top() {
    return mainStack.Peek();
}

public int GetMin() {
    return minStack.Peek();
}
};
