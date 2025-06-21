/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <long long> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
    int n;
    ll m;
    cin >> n;
    vi socks(2 * n);
    u_map freq;
    for (int i = 0; i < 2 * n; ++i) {
        cin >> socks[i];
        freq[socks[i]]++;
    }
    for (auto& [_, cnt] : freq) {
        if (cnt % 2 != 0) {
            cout << "impossible" << endl;
            return;
        }
    }

    vi original(socks.rbegin(), socks.rend()); 
    vi aux;
    int moves = 0;

    while (!original.empty() || !aux.empty()) {
        if (!original.empty() && !aux.empty() && original.back() == aux.back()) {
            original.pop_back();
            aux.pop_back();
            moves ++; 
        } else if (!original.empty()) {
            aux.push_back(original.back());
            original.pop_back();
            moves ++;
        } else {
            cout << "impossible" << endl;
            return;
        }
    }
    cout << moves << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
    solve();


}
