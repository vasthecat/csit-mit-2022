#include <iostream>
#include <vector>
using namespace std;

int fib(int n) {
    if (n == 1) {
        return 0;
    }
    else if (n < 4) {
        return 1;
    }
    else {
        return (fib(n - 1) + fib(n - 2));
    }
}

void bubble(vector<int>& v) {
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = 0; j < v.size() - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main()
{
    cout << "Hello, world!" << endl;
    cout << fib(10) << endl;
    vector <int> v = { 6, 2, 1, 4, 5, 6, 9, 12, 3, 1 };
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;
    bubble(v);
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;
    return 0;
}