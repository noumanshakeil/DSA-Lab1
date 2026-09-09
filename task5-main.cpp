#include <iostream>
#include <vector>
#include "task5-function.cpp"
using namespace std;

int main() {
    vector<vector<int>> t0 = pascalTriangle(0);
    cout << "n = 0:" << endl;
    for (int i = 0; i < t0.size(); i++) {
        for (int j = 0; j < t0[i].size(); j++) {
            cout << t0[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> t1 = pascalTriangle(1);
    cout << "n = 1:" << endl;
    for (int i = 0; i < t1.size(); i++) {
        for (int j = 0; j < t1[i].size(); j++) {
            cout << t1[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> t5 = pascalTriangle(5);
    cout << "n = 5:" << endl;
    for (int i = 0; i < t5.size(); i++) {
        for (int j = 0; j < t5[i].size(); j++) {
            cout << t5[i][j] << " ";
        }
        cout << endl;
    }

    cout << "row 5: ";
    for (int j = 0; j < t5[4].size(); j++) {
        cout << t5[4][j] << " ";
    }
    cout << endl;

    return 0;
}
