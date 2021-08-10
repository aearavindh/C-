#include <iostream>
using namespace std;

template <class T>
class Numbers {
    T first;
    T second;

    public:
       Numbers(T a, T b) {
           first = a;
           second = b;
       }
       T larger() {
           if (first > second)
              return first;
           return second;
       }
};

int main()
{
    Numbers<int> numbers(5, 6);
    cout << numbers.larger() << endl;
    return 0;
}