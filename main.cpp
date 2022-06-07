#include <iostream>
#include <vector>

int fib(int n){                                             //calculating the fibonacci number
    int tmp, n_1 = 0, n_2 = 1;
    while (n-- > 1){
        tmp = n_1;
        n_1 = n_2;
        n_2 = n_1 + tmp;
    }
    return n_1;
}

void bubble(std::vector<int> &v){
    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j < v.size() - 1; j++)
            if (v[j] > v[j + 1])
                std::swap(v[j], v[j + 1]);
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << std::endl;          //print 10th fibonacci number

    std::vector<int>  v{6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    
    for (int i = 0; i < v.size(); i++) std::cout << v[i] << " "; std::cout << std::endl; //print original vector

    bubble(v);

    for (int i = 0; i < v.size(); i++) std::cout << v[i] << " "; std::cout << std::endl; //print sorted vector

    return 0;
}
