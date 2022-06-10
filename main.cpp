#include<iostream>


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


int main()
{
    std::cout << "Hello, world!" << std::endl;

    fib(10);

    return 0;

}
