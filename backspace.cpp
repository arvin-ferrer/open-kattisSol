/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
  vi arr;
  s inp;
  cin >> inp;
  for (int i = 0; i < inp.size(); i++){
    if (inp[i] != '<') arr.push_back(inp[i]);
    else{
      arr.pop_back();
    }
  }
  for (char c: arr) cout << c;
  cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();


}
