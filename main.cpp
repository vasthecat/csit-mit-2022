#include <iostream>
#include <vector>

using namespace std;
//функция Фибоначчи
int fib(int x) {

    int a = 0, b = 1, q;
    for (int i = 1; i < x; ++i) {
        q = b;
        b += a;
        a = q;
    }
    return a;
}

void bubble(vector <int> &v)
{
    int n = v.size();
    for(int i = 0; i < n - 1; i++)
	for(int j = 0; j < n - 1 - i; j++)
	    if(v[j] > v[j + 1])
		swap(v[j], v[j + 1]);
}


int main()
{
    std::cout << "Hello, world!" << std::endl;

    cout << fib(10) << endl;

    vector < int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    for(int i = 0; i < v.size(); i++)
	cout << v[i] << ' ';

    cout << endl;
    bubble(v);

    for(int i = 0; i < v.size(); i++)
	cout << v[i] << ' ';
}