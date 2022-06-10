#include <iostream>
#include <iostream>
#include <vector>

void bubble(std::vector<int> &v)
{
    while(true)
    {
        int count = 0;
        for (int i = 0; i < v.size() - 1; ++i)
        {
            if(v[i] > v[i + 1])
            {
                std::swap(v[i], v[i+1]);
                ++count;
            }
        }
        if(count == 0)
        {
            break;
        }
    }    
}

int fib(int n)
{
	int temp, a = 0, b = 1;
	if(n == 0)
		return a;
	else if(n == 1)
		return b;
	else
	{
		for(int i = 0; i < n-1; ++i)
		{
			temp = b;
			b += a;
			a = temp;
		}
		return a;
	}
}

int main()
{
	std::cout << "Hello, world!" << std::endl;
	std::cout << fib(10) << std::endl;
    std::vector<int>v{6, 2, 1, 4, 5, 6, 9, 12, 3, 1};
    for (auto it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    bubble(v);
    for (auto it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl; 
	return 0;
}
