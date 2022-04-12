#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bubblesort(vector<int>&A){
    int i,j;
    int size=A.size();
    for(i=size-1;i>0;--i){
        for (j=1;j<=i;j++){
            if (A[j]<A[j-1])swap(A[j],A[j-1]);
        }
    }
}
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
    cout<<fib(10)<<endl;
    vector <int> a={6, 2, 1, 4, 5, 6, 9, 12, 3,1};
    for(vector<int>::iterator iter = a.begin(); iter != a.end(); iter ++){
       cout << *iter;
       cout << " ";}
    bubblesort(a);
    cout <<endl;
    for(vector<int>::iterator iter = a.begin(); iter != a.end(); iter ++){
       cout << *iter;
       cout << " ";}
    
    
    return 0;
}
