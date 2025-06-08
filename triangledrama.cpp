#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int Sum = -1;
    int A = -1, B = -1, C = -1;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int currentSum = matrix[i][j] * matrix[i][k] * matrix[j][k];
                if (currentSum > Sum) {
                    Sum = currentSum;
                    A = i;
                    B = j;
                    C = k;
                } else if (currentSum == Sum) {
                    if (i < A || (i == A && (j < B || (j == B && k < C)))) {
                        A = i;
                        B = j;
                        C = k;
                    }
                }
            }
        }
    }
    
    cout << A + 1 << " " << B + 1 << " " << C + 1 << endl;
}

