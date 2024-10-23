#include <iostream>
#include <queue>
using namespace std;

void printFirstNegativeInteger(int arr[], int n, int k) {
    queue<int> q;

    for (int i = 0; i < n; i++) {
        if (!q.empty() && q.front() == i - k) {
            q.pop();
        }
        if (arr[i] < 0) {
            q.push(i);
        }
        if (i >= k - 1) {
            if (!q.empty()) {
                cout << arr[q.front()] << " ";  
            } else {
                cout << "0 "; 
            }
        }
    }
}

int main() {
    int arr[] = {-8, 2, 3, -6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    printFirstNegativeInteger(arr, n, k);
    return 0;
}
