// Classroom Activity-4 — Problem 1: Print a Square Pattern
// Student: Malik Muhammad Hussain | Reg: B25F0330EE026
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 4;

    for (int row = 1; row <= SIZE; row++)
    {
        for (int col = 1; col <= SIZE; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
