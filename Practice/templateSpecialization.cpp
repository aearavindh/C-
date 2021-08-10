#include <iostream>
using namespace std;

template <class T>
class Value
{
    public:
       Value(T a) {
           cout << a << " is a number" << endl;
       }
};

template<>
class Value<char>
{
    public:
       Value(char a) {
           cout << a << " is a character" << endl;
       }
};



int main()
{
    Value<int> v1(5);
    Value<char> v2('v');
    Value<double> v3(5.6);
    return 0;
}