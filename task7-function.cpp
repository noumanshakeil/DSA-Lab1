#include <vector>
using namespace std;

vector<vector<int>> addMat(vector<vector<int>> a, vector<vector<int>> b) {
    int n = a.size();
    vector<vector<int>> c(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}

vector<vector<int>> subMat(vector<vector<int>> a, vector<vector<int>> b) {
    int n = a.size();
    vector<vector<int>> c(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    return c;
}

vector<vector<int>> naiveMult(vector<vector<int>> a, vector<vector<int>> b) {
    int n = a.size();
    vector<vector<int>> c(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

vector<vector<int>> strassen(vector<vector<int>> a, vector<vector<int>> b) {
    int n = a.size();
    vector<vector<int>> c(n, vector<int>(n, 0));
    if (n == 1) {
        c[0][0] = a[0][0] * b[0][0];
        return c;
    }

    int m = n / 2;
    vector<vector<int>> a11(m, vector<int>(m)), a12(m, vector<int>(m));
    vector<vector<int>> a21(m, vector<int>(m)), a22(m, vector<int>(m));
    vector<vector<int>> b11(m, vector<int>(m)), b12(m, vector<int>(m));
    vector<vector<int>> b21(m, vector<int>(m)), b22(m, vector<int>(m));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            a11[i][j] = a[i][j];
            a12[i][j] = a[i][j + m];
            a21[i][j] = a[i + m][j];
            a22[i][j] = a[i + m][j + m];
            b11[i][j] = b[i][j];
            b12[i][j] = b[i][j + m];
            b21[i][j] = b[i + m][j];
            b22[i][j] = b[i + m][j + m];
        }
    }

    vector<vector<int>> m1 = strassen(addMat(a11, a22), addMat(b11, b22));
    vector<vector<int>> m2 = strassen(addMat(a21, a22), b11);
    vector<vector<int>> m3 = strassen(a11, subMat(b12, b22));
    vector<vector<int>> m4 = strassen(a22, subMat(b21, b11));
    vector<vector<int>> m5 = strassen(addMat(a11, a12), b22);
    vector<vector<int>> m6 = strassen(subMat(a21, a11), addMat(b11, b12));
    vector<vector<int>> m7 = strassen(subMat(a12, a22), addMat(b21, b22));

    vector<vector<int>> c11 = addMat(subMat(addMat(m1, m4), m5), m7);
    vector<vector<int>> c12 = addMat(m3, m5);
    vector<vector<int>> c21 = addMat(m2, m4);
    vector<vector<int>> c22 = addMat(subMat(addMat(m1, m3), m2), m6);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = c11[i][j];
            c[i][j + m] = c12[i][j];
            c[i + m][j] = c21[i][j];
            c[i + m][j + m] = c22[i][j];
        }
    }
    return c;
}
