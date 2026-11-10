// Classroom Activity-4 — Problem 7: University Attendance System
// Student: Malik Muhammad Hussain | Reg: B25F0330EE026
// 3 classes, 4 students each. Enter 1 = Present, 0 = Absent.
#include <iostream>
using namespace std;

int main()
{
    const int CLASSES = 3;
    const int STUDENTS = 4;
    int status;
    int presentCount;

    for (int classNo = 1; classNo <= CLASSES; classNo++)
    {
        cout << "===== Class " << classNo << " =====" << endl;
        presentCount = 0;

        for (int studentNo = 1; studentNo <= STUDENTS; studentNo++)
        {
            cout << "Enter attendance for Student " << studentNo
                 << " (1=Present, 0=Absent): ";
            cin >> status;

            // Accept only 0 or 1; treat anything else as absent
            if (status == 1)
            {
                presentCount++;
            }
        }

        cout << "Total present students in Class " << classNo
             << ": " << presentCount << endl
             << endl;
    }

    return 0;
}
