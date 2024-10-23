#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void printNGE(int arr[], int n) {
    stack<int> s; 
    vector<int> nge(n, -1); 

    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            nge[s.top()] = arr[i]; 
            s.pop(); 
        }
        s.push(i); 
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " --> " << nge[i] << endl;
    }
}

int main() {
    int arr[] = { 4, 5, 2, 25 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}
