#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        string commands;
        getline(cin, commands); 

        int n;
        cin >> n;
        cin.ignore(); 

        string arrayStr;
        getline(cin, arrayStr); 

        deque<int> dq;

        if (n > 0) {
            // Remove brackets and spaces
            arrayStr.erase(remove(arrayStr.begin(), arrayStr.end(), '['), arrayStr.end());
            arrayStr.erase(remove(arrayStr.begin(), arrayStr.end(), ']'), arrayStr.end());
            arrayStr.erase(remove(arrayStr.begin(), arrayStr.end(), ' '), arrayStr.end());

            stringstream ss(arrayStr);
            string token;
            while (getline(ss, token, ',')) {
                if (!token.empty()) {
                    dq.push_back(stoi(token));
                }
            }
        }

        bool isReversed = false;
        bool error = false;

        for (char cmd : commands) {
            if (cmd == 'R') {
                isReversed = !isReversed;
            } else if (cmd == 'D') {
                if (dq.empty()) {
                    error = true;
                    break;
                }
                if (isReversed) {
                    dq.pop_back();
                } else {
                    dq.pop_front();
                }
            }
        }

        if (error) {
            cout << "error" << endl;
        } else {
            if (isReversed) {
                reverse(dq.begin(), dq.end());
            }
            // Print the resulting array
            cout << "[";
            for (size_t i = 0; i < dq.size(); ++i) {
                if (i > 0) {
                    cout << ",";
                }
                cout << dq[i];
            }
            cout << "]" << endl;
        }
    }
}
