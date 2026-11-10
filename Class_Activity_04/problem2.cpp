// Classroom Activity-4 — Problem 2: Print Numbers in Rows
// Student: Malik Muhammad Hussain | Reg: B25F0330EE026
#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 4;
    const int COLS = 3;

    for (int row = 1; row <= ROWS; row++)
    {
        for (int col = 1; col <= COLS; col++)
        {
            cout << row;
            if (col < COLS)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
