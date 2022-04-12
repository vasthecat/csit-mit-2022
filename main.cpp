#include <iostream>
#include <vector>
using namespace std;

int fib(int n){
    int x = 0, y = 1, z, r = 0;
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else {
        for (int i = 2; i < n; ++i){
            z = x + y;
            r = z;
            x = y;
            y = z;
        }
        return r;
    }
}

void bubble(vector<int>& v){
    for (int i = 0; i < v.size(); ++i)
		for(int j = 0; j < v.size()-1; ++j)
			if (v[j+1] < v[j])
				swap(v[j+1], v[j]);
}

int main()
{
	vector<int> vec = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    cout << "Hello, world!" << endl;
	cout << fib(10) << endl;
	for (int i = 0; i < vec.size(); ++i)
		cout << vec[i] << " ";
	bubble(vec);
	cout << endl;
	for (int i = 0; i < vec.size(); ++i)
		cout << vec[i] << " ";
    return 0;
}