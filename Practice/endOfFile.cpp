#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream numberFile("numbers.txt");
    string s;
    int a;

    // EOF - CTRL + D
    while(numberFile >> s >> a) {
        cout << s << a << endl;
    }
    return 0;
}

// EOF
// int main()
// {
//     ofstream numberFile("numbers.txt");
//     int a;
//     // EOF - CTRL + D
//     while(cin >> a) {
//         numberFile << "Number: " << a << endl;
//     }
//     return 0;
// }