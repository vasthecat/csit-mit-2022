#include <iostream>
#include <vector>

using namespace std;

void bubble(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size() - 1; j++) {
            if (vec[j] > vec[j + 1])
                swap(vec[j], vec[j + 1]);
        }
    }
}

int fib(int n) {
    int c, a = 0;
    int b = 1;
    for (int i = 3; i <= n; i++) {
        c = b;
        b = a + b;
        a = c;
    }
    return b;
}

int main() {
    cout << "Hello, World!" << endl;
    cout << fib(10) << endl;
    vector<int> vec = { 6, 2, 1, 4, 5, 6, 9, 12, 3, 1 };
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    bubble(vec);

    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
        cout << *iter << " ";
    cout << endl;
    return 0;
}