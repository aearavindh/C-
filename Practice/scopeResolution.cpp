#include <iostream>
using namespace std;

class MyClass {
    public:
      static int count;
};

int MyClass::count = 199;

int main() {
    MyClass obj;
    cout << MyClass::count << endl;
    cout << "obj.count = " << obj.count << endl;
    return 0;
}
