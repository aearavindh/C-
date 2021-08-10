#include <iostream>
using namespace std;

class Example {
    int a;

    public:
       Example() {
           a = 1;
       }

       void printA() {
           cout << "a = " << a << endl;
           cout << "this -> a = " << this -> a << endl;
           cout << "(*this).a = " << (*this).a << endl;
       }
};

int main() {
    Example e;
    e.printA();
    return 0;
}

// friend function
// class Example {
//     int var;
//     public:
//       Example() {
//           var = 1;
//       }

//       friend void changeVar(Example& e);
// };

// void changeVar(Example& e) {
//     e.var = 3;
//     cout << e.var << endl;
// }

// int main()
// {
//     Example object;
//     changeVar(object);
//     return 0;
// }

// class composition
// class Birthday {
//     int day;
//     int month;
//     int year;
    
//     public:
//         Birthday(int d, int m, int y) {
//             day = d;
//             month = m;
//             year = y;
//         }

//     void printDateOfBirth() {
//         cout << day << "/" << month << "/" << year << endl;
//     }
// };

// class Person {
//     string name;
//     Birthday bday;

//     public:
//        Person(string n, Birthday b) : name(n), bday(b) {
//        }

//        void printPersonData() {
//            cout << "Name: " << name << endl;
//            bday.printDateOfBirth();
//        }
// };

// int main()
// {
//     Birthday b(16, 8, 1998);
//     Person p("Aravindh A E", b);
//     p.printPersonData();
//     return 0;
// }


// member initilizer
// class Example {
//     int a, b;
//     public:
//     //    Example(int x, int y) {
//     //        a = x;
//     //        b = y;
//     //    }
//        Example(int x, int y) : a(x), b(y) {
//          cout << a << " " << b << endl;
//        }
// };

// int main()
// {
//     Example object(1,2);
//     return 0;
// }