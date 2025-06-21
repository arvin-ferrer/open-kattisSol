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
    int n;
    cin >> n;

    unordered_map<char, int> val;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        if (c == 'T') val['A' + i] = 1;
        else val['A' + i] = 0;
    }

    s line;
    cin.ignore(); 
    getline(cin, line); 
    stringstream ss(line);
    s ch;
    stack<int> st;

    while (ss >> ch) {
        if (ch.size() == 1 && isalpha(ch[0])) {
            st.push(val[ch[0]]);
        } 
        else if (ch == "*") {
            int b = st.top(); 
            st.pop();
            int a = st.top(); 
            st.pop();
            st.push(a & b);
        } 
        else if (ch == "+") {
            int b = st.top(); 
            st.pop();
            int a = st.top(); 
            st.pop();
            st.push(a | b);
        } 
        else if (ch == "-") {
            int a = st.top(); st.pop();
            st.push(1 - a);
        }
    }

    if (st.top() == 1) {
        cout << "T\n";
    } else {
        cout << "F\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}

