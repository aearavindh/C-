#include <iostream>
using namespace std;

void passByValue(int a) {
    a = 45;
}

void passByReference(int* a) {
    *a = 45;
}

int main() {
    int x = 10;
    // passByValue(x);
    passByReference(&x);
    cout << x << endl;
    return 0;
}


// int main()
// {
//     int a = 5;
//     cout << &a << endl;
//     int* ptr = &a;
//     cout << ptr;
//     return 0;
// }