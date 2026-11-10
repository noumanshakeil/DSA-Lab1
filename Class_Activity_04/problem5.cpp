// Classroom Activity-4 — Problem 5: Print a Pyramid
// Student: Malik Muhammad Hussain | Reg: B25F0330EE026
// Hint: one inner loop for spaces, one for stars.
#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 5;

    for (int row = 1; row <= ROWS; row++)
    {
        // Leading spaces to center the pyramid
        for (int space = 1; space <= ROWS - row; space++)
        {
            cout << " ";
        }

        // Stars (1, 3, 5, 7, 9) with a space between each star
        for (int star = 1; star <= (2 * row - 1); star++)
        {
            cout << "*";
            if (star < (2 * row - 1))
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
