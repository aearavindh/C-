#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str = "geeksforgeeks a computer science";
    string str1 = "geeks";
  
    // Find first occurrence of "geeks"
    size_t found = str.find(str1);
    if (found != string::npos)
        cout << "First occurrence is " << found << endl;
    return 0;
}