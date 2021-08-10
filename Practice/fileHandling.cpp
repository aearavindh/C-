#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream testFile("testFile.txt");
    if (testFile.is_open()){
        testFile << "Hey boss!" << endl;
    } else {
        cout << "File open error" << endl;
    }
    testFile.close();
    return 0;
}

// opening and writing into a file
// int main()
// {
//     ofstream testFile;
//     testFile.open("testFile.txt");
//     testFile << "Testing Files" << endl;
//     testFile.close();
//     return 0;
// }