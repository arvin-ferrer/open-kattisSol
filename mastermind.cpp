#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main(){
  int n;
  string s1, s2;
  cin >> n >> s1 >> s2;
  int r = 0;
  for (int i = 0; i < n; i++){
    if(s1[i] == s2[i]) r++;
  }
  set <int> nodups;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
    if (s1[i] == s2[j] && i != j)
        nodups.insert(s1[i]);
    }
}
  cout << r << " " << nodups.size();
}
