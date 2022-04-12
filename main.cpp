#include <iostream>
#include <vector>

using namespace std;

void bubble(std::vector<int> &v)
{
    bool swapp = true;
    while (swapp)
    {
        swapp = false;
        for (size_t i = 0; i < v.size() - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                v[i] += v[i + 1];
                v[i + 1] = v[i] - v[i + 1];
                v[i] -= v[i + 1];
                swapp = true;
            }
        }
    }
}

int fib(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; ++i)
    {
        int temp = b;
        b += a;
        a = temp;
    }
    return a;
}

int main()
{
    cout << "Hello, world!" << endl;
    cout << fib(10) << endl;
    vector<int> v{6, 2, 1, 4, 5, 6, 9, 12, 3, 1};

    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
        cout << *i << " ";

    bubble(v);

    cout << endl;
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    return 0;
}
