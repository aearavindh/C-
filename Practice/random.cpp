#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    cout << (rand()) + 1 <<endl;
    return 0;
}
