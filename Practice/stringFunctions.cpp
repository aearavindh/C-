#include <iostream>
using namespace std;

void print();

string s1, s2;

int main() {
    s1 = "aeaedfkdjsaeae";
    s2 = "World";
    cout << "substr: " << s1.substr(0, 3) << endl;
    
    print();

    s1.swap(s2);

    print();

    size_t found = s2.rfind("ae");
    if (found != string::npos)
        cout << "find: " << found << endl;
    
    return 0;
}

void print() {
    string s1="hai", s2="bye";
    cout << "s1 ==> " << ::s1 << endl;
    cout << "s2 ==> " << ::s2 << endl;
}


// string input
// int main()
// {
//     string s = "Hello World";
//     string s1("Hello World");

//     cout << "s " << s << endl;
//     cout << "s1 " << s1 << endl;
//     // cin >> s;
//     getline(cin, s);
//     cout << "String: " << s << endl;
//     return 0;
// }