#include <iostream>		
#include<vector>

using namespace std;


void bubble(vector<int>& v) {
	for (int j = 0; j < v.size(); j++)
		for (int i = 0; i < v.size() - 1; i++)
			if (v[i] > v[i + 1])
				swap(v[i], v[i + 1]);
}


int fib(int n) {
	int f1 = 0;
	int f2 = 1;
	int fn = 1;
	if (n >= 1)
		if (n >= 2)
			for (int i = 0; i < n - 2; i++) {
				fn = f1 + f2;
				f1 = f2;
				f2 = fn;
			}

	return fn;
}



int main()
{
	vector<int> v = { 6, 2, 1, 4, 5, 6, 9, 12, 3, 1, };

	cout << "Hello, world!" << endl;

	cout << fib(10) << endl; 

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;

	bubble(v);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}