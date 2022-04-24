#include <iostream>
#include <vector>

int fib(int n) {

    if (n == 0)
        return 0; // базовый случай (условие завершения)
    if (n == 1)
        return 1; // базовый случай (условие завершения)
    return fib(n-1) + fib(n-2);

}

template <typename T>
inline void swap( T & arg1, T & arg2)
{
    T temp = arg1;
    arg1 = arg2;
    arg2 = temp;
};
template <typename T>
void bubble(std::vector<T> & vArray)
{
    for (int i = 0; i < vArray.size(); ++i)
    {
        for (int j = vArray.size()-1; j > i; --j)
        {
            if (vArray[i] > vArray[j])
            {   swap( vArray[i], vArray[j]); }
        }
    }
};

int main()
{
    std::vector<int> a = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1}; // вектор с заданными числами

    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(9) << std::endl; // 9, т.к. счет начинается с нуля

    // вывод начального вектора на экран
    for (std::vector<int>::iterator it = a.begin() ; it!=a.end() ; ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    bubble(a);

     // вывод итогового вектора на экран
    for (std::vector<int>::iterator it = a.begin() ; it!=a.end() ; ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    return 0;
}
