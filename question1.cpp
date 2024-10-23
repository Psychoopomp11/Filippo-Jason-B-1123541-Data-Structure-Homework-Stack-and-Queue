#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void reverse(stack<int>& st) {
    vector<int> elements;

    while (!st.empty()) {
        elements.push_back(st.top());
        st.pop();
    }

    for (int i = 0; i < elements.size(); i++) {
        st.push(elements[i]);
    }
}

int main() {
    stack<int> st;
    int n;

    cout << "Enter the number of elements in the stack: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        st.push(value);
    }

    cout << "Reversed Stack: " << endl;
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    
    
}
