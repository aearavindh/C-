#include <iostream>
using namespace std;

void show() {
    static int count = 0;
    cout << count << endl;
    count++;
}

int main() {
    for(int i=0;i<5;i++)
        show();
    return 0;
}