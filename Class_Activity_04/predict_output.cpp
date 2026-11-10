// Classroom Activity-4 — Predict the Output (trace exercise)
// Student: Malik Muhammad Hussain | Reg: B25F0330EE026
// Predicted output (manual trace before running):
// 2 3 4
// 3 4 5
// 4 5 6
#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    do
    {
        int y = 1;
        while (y <= 3)
        {
            cout << x + y << " ";
            y++;
        }
        cout << endl;
        x++;
    } while (x <= 3);

    return 0;
}
