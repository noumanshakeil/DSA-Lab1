#include <iostream>
#include <vector>
#include "task3-function.h"
using namespace std;

int main() {
    int array1[] = {1, 1, 3, 3, 5};
    vector<int> indices1 = findIndices(array1, 5, 3);
    cout << "Indices of 3 in array1: ";
    for (int index : indices1) {
        cout << index << " ";
    }
    cout << endl;

    int array2[] = {1, 2, 3, 4, 5};
    vector<int> indices2 = findIndices(array2, 5, 6);
    cout << "Indices of 6 in array2: ";
    for (int index : indices2) {
        cout << index << " ";
    }
    cout << endl;

    int array3[1] = {};
    vector<int> indices3 = findIndices(array3, 0, 1);
    cout << "Indices of 1 in array3: ";
    for (int index : indices3) {
        cout << index << " ";
    }
    return 0;
}