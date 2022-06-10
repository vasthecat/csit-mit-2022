#include<iostream>
#include<vector>


void fib(int n){
    int e1=0, e2=1;
    bool f=true;

    for (int i=0; i<n-2; i++){
        if(f){
            e1 += e2;
        } else{
            e2 += e1;
        }
        f = !f;
    }
    std::cout << (f ? e2 : e1) << "\n";
}


void bubble(std::vector<int> &v)
{
    int i, j;
    for (i = 0; i < v.size()-1; i++)
        for (j = 0; j < v.size() - i - 1; j++)
            if (v[j] > v[j + 1])
                std::swap(v[j], v[j + 1]);
}


int main()
{
    std::vector<int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    std::cout << "Hello, world!" << std::endl;

    fib(10);

    for (std::vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << "\n";

    bubble(v);

    for (std::vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        std::cout << *it <<  " ";
    }
    std::cout << "\n";

    return 0;

}
