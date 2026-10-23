class MinStack {
public:
    stack<int> st ;
    stack<int > minst ;
    MinStack() {
        this->st={};
        this->minst={};
    }

    void push(int val) {
        this->st.push(val);

        if (minst.empty()) {
            minst.push(val);
        }
        else {
            minst.push(min(val, minst.top()));

        }
    }

    void pop() {
        this->st.pop();
        this->minst.pop();

    }

    int top() {
        return this->st.top() ;
    }

    int getMin() {
        return this->minst.top() ;
    }
};
