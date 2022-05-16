
#include <iostream>
#include "Source 1.cpp";
using namespace std;

int main()
{
    int num = 0;

    while (true)
    {
        cout << "Enter task number (enter 0 to exit): " << endl;
        cin >> num;

        if (num == 0) { break; }

        switch (num)
        {
        case 1:
            t1();
            break;

        case 2:
            t2();
            break;

        case 3:
            t3();
            break;

        case 4:
            t4();
            break;

        case 5:
            t5();
            break;

        case 6:
            t6();
            break;

        case 7:
            t7();
            break;

        case 8:
            t8();
            break;

        case 9:
            t9();
            break;

        case 10:
            t10();
            break;

        default:
            cout << "Unnknown. " << endl;
            break;

        }
    }
}

