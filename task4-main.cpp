#include <iostream>
#include "task4-function.cpp"
using namespace std;

int main() {
    string text1 = "hello world";
    string pattern1 = "hello";
    cout << "Pattern at beginning: " << findPattern(text1, pattern1) << endl;

    string text2 = "hello world";
    string pattern2 = "world";
    cout << "Pattern at the end: " << findPattern(text2, pattern2) << endl;

    string text3 = "hello world";
    string pattern3 = "xyz";
    cout << "Pattern not present: " << findPattern(text3, pattern3) << endl;

    string text4 = "hello world";
    string pattern4 = "";
    cout << "Empty pattern: " << findPattern(text4, pattern4) << endl;

    return 0;
}
