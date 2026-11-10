// Classroom Activity-4 — Problem 4: Decreasing Number Pattern
// Student: Malik Muhammad Hussain | Reg: B25F0330EE026
#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 5;

    for (int row = ROWS; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
            if (col < row)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
