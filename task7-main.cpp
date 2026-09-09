#include <iostream>
#include <vector>
#include <cstdlib>
#include "task7-function.cpp"
using namespace std;

void printMat(vector<vector<int>> m) {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

bool sameMat(vector<vector<int>> a, vector<vector<int>> b) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<int>> a2 = {{1, 2}, {3, 4}};
    vector<vector<int>> b2 = {{5, 6}, {7, 8}};
    cout << "2x2 Strassen:" << endl;
    printMat(strassen(a2, b2));
    cout << "2x2 Naive:" << endl;
    printMat(naiveMult(a2, b2));
    cout << "Match: " << (sameMat(strassen(a2, b2), naiveMult(a2, b2)) ? "yes" : "no") << endl;

    vector<vector<int>> a4 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };
    vector<vector<int>> b4 = {
        {8, 7, 6, 5},
        {4, 3, 2, 1},
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    cout << "4x4 Strassen:" << endl;
    printMat(strassen(a4, b4));
    cout << "4x4 Naive:" << endl;
    printMat(naiveMult(a4, b4));
    cout << "Match: " << (sameMat(strassen(a4, b4), naiveMult(a4, b4)) ? "yes" : "no") << endl;

    vector<vector<int>> ar(4, vector<int>(4));
    vector<vector<int>> br(4, vector<int>(4));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            ar[i][j] = rand() % 10;
            br[i][j] = rand() % 10;
        }
    }
    cout << "Random 4x4 Match: " << (sameMat(strassen(ar, br), naiveMult(ar, br)) ? "yes" : "no") << endl;

    return 0;
}
