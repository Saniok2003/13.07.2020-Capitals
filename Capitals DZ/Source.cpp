#include <iostream>
#include "Kyiv.h"
#include "Warsaw.h"
#include "Moscow.h"
using namespace std;
using namespace Ukraine;
using namespace Poland;
using namespace Russia;

void Comprasion(int a, int b)
{
    if (a == b)
    {
        cout << "Countrys population at number 1 = countrys population at number 2" << endl;
    }
    else
    {
        if (a > b)
        {
            cout << "Countrys population at number 1 is greater" << endl;
        }
        else
        {
            cout << "Countrys population at number 1 is less" << endl;
        }
    }
}

int main()
{
    Kyiv ua(2884000);
    Moscow ms(11920000);
    Warsaw ws(1708000);

    Comprasion(ms.GetPeople(), ms.GetPeople());

    return 0;
}