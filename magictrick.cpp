#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  string s;
  cin >> s;
  set <char> nodups;
  for (int i = 0; i < s.length(); i++){
    nodups.insert(s[i]);
  }
  if (s.length() == nodups.size()){
    cout << 1;
  }
  else{
    cout << 0; 
  }
}



