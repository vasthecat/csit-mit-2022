#include <iostream>
#include <vector>
using namespace std;

void bubble(vector<int> &vec){
  for (int i = 0; i < 9; i++) {
    for (int j = 9; j > i; j--) {
      if (vec[j - 1] > vec[j]) {
        swap(vec[j - 1], vec[j]);
      }
    }
  }
  for(int i = 0; i < 10; i++){
    cout << vec[i] << " ";
  }
  cout << endl;

}
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
    vector<int> vec = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    cout << "Hello, world!" << endl;
    fib(10);
    for(int i = 0; i < 10; i++){
      cout << vec[i] << " ";
    }
    cout << endl;
    bubble(vec);
    cout << endl;
    return 0;
}
