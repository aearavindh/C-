#include <iostream>
using namespace std;

int main()
{
    try
    {
        int fatherAge = 50;
        int sonAge = 60;

        if (sonAge > fatherAge)
        {
            throw -1;
        }
    }
    // catch (int x)
    catch (...)
    {
        cout << "Son's age is greater than father " << endl;
    }

    return 0;
}