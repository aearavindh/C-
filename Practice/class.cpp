#include <iostream>
using namespace std;

class Shop {
    private:
       int money;

    public:
       Shop(int m) {
           money += m;
       }
       
       void modifyMoney() {
           money = money + 5;
       }

       int getMOney() {
           return money;
       }
};

int main()
{
    Shop s(100);
    s.modifyMoney();
    cout << s.getMOney();
    return 0;
}
