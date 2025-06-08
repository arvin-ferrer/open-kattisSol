#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bestScore = LONG_LONG_MIN;  
void recur(int curr, int lastJump, long long currScore, const vector<long long>& p) {
    int n = p.size();
    if (curr == n - 1) {
        bestScore = max(bestScore, currScore);
        return;
    }
    for (int next = curr + 1; next < n; next++) {
        int jump = next - curr;
        
        if (lastJump == -1 || jump <= lastJump) {
            int newLastJump = (lastJump == -1) ? jump : min(lastJump, jump);
            recur(next, newLastJump, currScore + p[next], p);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    recur(0, -1, p[0], p);
    
    cout << bestScore << endl;
}

