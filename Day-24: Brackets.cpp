#include <iostream>
using namespace std;
int fun(string s)
}
int main()
{
    int a;
    std::cin >> a;
    while (a--)
    {
        string s;
        cin >> s;
        int x = fun(s);
        for (int i = 0; i < x; i++)
        {
            std::cout << "(";
        }
        for (int i = 0; i < x; i++)
        {
            std::cout << ")";
        }
        std::cout << std::endl;
    }
    return 0;
}
