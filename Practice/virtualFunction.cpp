#include <iostream>
using namespace std;

class Batsman {
    public:
       virtual void specialShot() = 0;
};
class Dhoni : public Batsman {
    public:
       void specialShot() {
           cout << "Helicopter shot" << endl;
       }
};
class Kohli : public Batsman {
    public:
       void specialShot() {
           cout << "Cover drive" << endl;
       }
};

int main()
{
    Dhoni dhoni;
    Kohli kohli;

    Batsman* b1 = &dhoni;
    Batsman* b2 = &kohli;

    b1 -> specialShot();
    b2 -> specialShot();

    return 0;
}