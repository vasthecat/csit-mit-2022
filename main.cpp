#include <iostream>
using namespace std;

int fib(int n){
    int c, a = 0;
    int b = 1;
    for(int i = 3; i <= n; i++){
        c = b;
        b = a + b;
        a = c;
    }
    return b;
}

int main(){
    cout << "Hello, World!" << endl;
    cout << fib(10) << endl;
    return 0;
}