#include <iostream>
#include <vector>

using namespace std;
int fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; i < n; ++i) {
        b += a;
        a = b - a;
    }
    cout << b << endl;
}

void bubble(vector<int> &v) {
    bool f = false;
    while (!f) {
        f = true;
        for (int i = 0; i < v.size() - 1; ++i) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                f = false;
            }
        }
    }
}

int main() {
    cout << "Hello, World!" << endl;

    fib(10);

    vector<int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    bubble(v);

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    return 0;
}