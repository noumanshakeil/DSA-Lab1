#include <iostream>
#include <vector>
#include "task6-function.cpp"
using namespace std;

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    vector<int> m1 = findMode(arr1, 5);
    cout << "Unique mode: ";
    for (int i = 0; i < m1.size(); i++) {
        cout << m1[i] << " ";
    }
    cout << endl;

    int arr2[] = {1, 1, 2, 2, 3};
    vector<int> m2 = findMode(arr2, 5);
    cout << "Multiple modes: ";
    for (int i = 0; i < m2.size(); i++) {
        cout << m2[i] << " ";
    }
    cout << endl;

    int arr3[1] = {};
    vector<int> m3 = findMode(arr3, 0);
    cout << "Empty array: ";
    for (int i = 0; i < m3.size(); i++) {
        cout << m3[i] << " ";
    }
    cout << endl;

    return 0;
}
