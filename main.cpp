#include <iostream>
#include <vector>

int fib(int n){
    if (n == 1) return 0;
    else if (n == 2) return 1;
    return fib(n-2) + fib(n-1);
}

void bubble(std::vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v.size()-i; j++){
            if (v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main()
{
    std::vector <int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    std::cout << "Hello, world!" << std::endl;
    std::cout << fib(10) << std::endl;
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << ' ';
    std::cout << std::endl;
    bubble(v);
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << ' ';
    std::cout << std::endl;
    return 0;
}
