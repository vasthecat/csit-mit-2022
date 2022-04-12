#include <iostream>

using namespace std;
int fib(int n){
    int a=0, b=1;
    for (int i=2;i<n;++i){
        int t = b;
        b = a+b;
        a= t;
        
    }
    return b;
}
int main()
{
    std::cout << "Hello, world!" << std::endl;
    cout<<fib(10);
    return 0;
}
