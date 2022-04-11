#include <iostream>
using namespace std;

void fib (int n){
  int a = 0;
  if (n > 1){
    int b = 1;
    int z = 0;
    for(int i = 2; i < n; i++){
      z = a + b;
      a = b;
      b = z;
    }
    cout << z << endl;
  }
}

int main()
{
    cout << "Hello, world!" << endl;
    int a = 10;
    fib(a);
    cout << endl;
    return 0;
}
