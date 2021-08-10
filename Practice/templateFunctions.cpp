#include <iostream>
using namespace std;

template <class FIRST, class SECOND>
FIRST add(FIRST a, SECOND b)
{
    return a + b;
}

int main()
{
    int a = 5;
    double b = 7.5;
    cout << add(a, b) << endl;
    return 0;
}

// template function
// template <class T>
// T add(T a, T b)
// {
//     return a + b;
// }

// int main()
// {
//     double a = 5.5, b = 7;
//     cout << add(a, b) << endl;
//     return 0;
// }