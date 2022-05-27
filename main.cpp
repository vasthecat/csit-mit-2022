#include <iostream>
#include <vector>
int fib(int n){
    int a=0;
    int b=1;
    for (int i=0;i<n-1;i++){
        int temp=b;
        b+=a;
        a=temp;
    }
    return a;
}

void bubble(std::vector<int> &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size()-1;j++){
            if (v[j]>v[j+1]){
                std::swap(v[j],v[j+1]);
            }
        }
    }
}

int main()
{
    std::cout << "Hello, world!" << std::endl;

    std::cout << fib(10) << std::endl;

    std::vector<int> v = {6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;
    bubble(v);
    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
