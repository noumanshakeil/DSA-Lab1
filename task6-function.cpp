#include <vector>
using namespace std;

vector<int> findMode(int arr[], int n) {
    vector<int> modes;
    if (n == 0) {
        return modes;
    }

    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == maxCount) {
            bool already = false;
            for (int k = 0; k < modes.size(); k++) {
                if (modes[k] == arr[i]) {
                    already = true;
                }
            }
            if (!already) {
                modes.push_back(arr[i]);
            }
        }
    }
    return modes;
}
