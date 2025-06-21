/*
  Created by: acferrer
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string s;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> u_map;

void solve(){
    int L;
    cin >> L;
    cin >> ws; 
    string str;
    getline(cin, str);

    stack<char> stk;
    unordered_map<char, char> match = {
        {'(', ')'},
        {'[', ']'},
        {'{', '}'}
    };
    for (int i = 0; i < L; ++i) {
        char c = str[i];
        if (c == ' ') continue;

        if (match.count(c)) {
            stk.push(match[c]);  
        } else if (c == ')' || c == ']' || c == '}') {
            if (!stk.empty() && stk.top() == c) {
                stk.pop();
            } else {
                cout << c << " " << i << "\n";
                return;
            }
        }
    }

    cout << "ok so far\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}

