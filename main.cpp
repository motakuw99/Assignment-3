#include"BigDecimalInt.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
    int num;
    while(true)
    {
    BigDecimalInt b1, b2, b3;
    cout << "-----------------------------------------------------------------------------------------------------------------\n";
    cout << "Please enter first number:" << endl;
    cin >> b1;
    cout << "\nPlease enter second number:" << endl;
    cin >> b2;
    cout << "\nWhat do you want to do? \n1- Add \n2- Subtract \n";
        cin >> num;
        switch(num)
        {
        case 1:
            b3 = b1 + b2;
            cout << b3 << "\n\n\n";
            break;
        case 2:
            b3 = b1 - b2;
            cout << b3 << "\n\n\n";
            break;
        }
    }
    return 0;
}
