// Classroom Activity-4 — Problem 6: Multiplication Tables (2 to 10)
// Student: Malik Muhammad Hussain | Reg: B25F0330EE026
#include <iostream>
using namespace std;

int main()
{
    for (int n = 2; n <= 10; n++)
    {
        cout << "Multiplication Table of " << n << endl;
        cout << "------------------------" << endl;

        for (int i = 1; i <= 10; i++)
        {
            cout << n << " x " << i << " = " << (n * i) << endl;
        }

        cout << endl;
    }

    return 0;
}
