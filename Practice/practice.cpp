#include <iostream>
using namespace std;

class Example
{
    int a;
    public:
       Example() {
           a = 1;
       }
       
       void changeA() {
           a = 5;
       }

       void printA() const {
           cout << a <<endl;
       }
};

int main()
{
    Example object;
    object.printA();
    object.changeA();
    object.printA();

    const Example o;
    o.printA();

    return 0;
}

// class Example {
//     public:
//        Example() {
//            cout << "Constructor called..." << endl;
//        }
//        ~Example() {
//            cout << "Destructor called..." << endl;
//        }
// };

// int main()
// {
//     Example object;
//     cout << "Main" << endl;
//     return 0;
// }

// arrow selection operator
// class Example {
//     public:
//        int count = 45;
//        void printHello() {
//            cout << "Hello" << endl;
//        }
// };

// int main()
// {
//     Example object;
//     Example* pointer = &object;
//     pointer -> printHello();
//     cout << pointer -> count;
//     return 0;
// }

// pointer arithmetic
// int main() {
//     cout << "\n";
//     int a[3];
//     a[2] = 19;
//     int* p1 = &a[0];
//     int* p2 = &a[1];
//     int* p3 = &a[2];
//     cout << p1 <<endl;
//     cout << p2 <<endl;
//     cout << p3 <<endl;

//     // p1 += 2;
//     cout << *(p1+2);
//     cout << "\n\n";
//     return 0;
// }

// sizeof
// int main()
// {
//     cout << "\n";
//     int a[400];
//     cout << sizeof(a);
//     cout << "\n\n";
//     return 0;
// }