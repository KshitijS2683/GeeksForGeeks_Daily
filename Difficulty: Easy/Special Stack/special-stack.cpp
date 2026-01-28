void push(stack<int>& s, int a) {
    // Your code goes here
    s.push(a);
}

bool isFull(stack<int>& s, int n) {
    // Your code goes here
    return s.size() == n;
}

bool isEmpty(stack<int>& s) {
    // Your code goes here
    return s.empty();
}

int pop(stack<int>& s) {
    // Your code goes here
    int a = s.top();
    s.pop();
    return a;
}

int getMin(stack<int>& s) {
    // Your code goes here
    int b = INT_MAX;
    stack<int> s1 = s;
    while(!s.empty())
    {
        b = min(b,s.top());
        s.pop();
    }
    s = s1;
    return b;
}