#include <iostream>

using namespace std;

void fib (int n){
  int a = 0;
  cout << a << endl;
  if (n > 1){
    int b = 1;
    cout << b << endl;
    int z = 0;
    for(int i = 2; i < n; i++){
      z = a + b;
      cout << z << endl;
      a = b;
      b = z;
    }
    cout << z << endl;
  }
}

int main(){
    cout << "Hello, world!" << endl;
    fib(10);
    cout << endl;
    return 0;
}
