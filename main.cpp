#include <iostream>
#include <vector>
using namespace std;

int fib(int n) {
    if (n <= 0) return -1;
    if (n == 1) return 0;
    if (n == 2) return -1;

    int a = 0, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

template <typename T>
void bubblesort(vector<T>& v) {
    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }

}

int main()
{
    cout << "Hello, world!" << endl;
    cout << fib(10) << endl;
    vector<int> v = { 6, 2, 1, 4, 5, 6, 9, 12, 3, 1 };
    for (int e : v) {
        cout << e << ' ';
    }
    cout << endl;
    bubblesort(v);
    for (int e : v) {
        cout << e << ' ';
    }
    cout << endl;
    return 0;
}
