#include <iostream>
#include <vector>
using namespace std;

int fib(int n)
{
    int a = 0;
    int b = 1;
    int t;
    for (int i = 0; i < n; i++) {
        t =  b;
        b += a;
        a =  t;
    }
    return a;
}

void bubble(std::vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
}


int main()
{
    std::vector<int> vec = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    cout << "Hello, world!" << endl;
    cout << fib(10) << endl;
    for (int i = 0; i < 10; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    bubble(vec);
    for (int i = 0; i < 10; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}