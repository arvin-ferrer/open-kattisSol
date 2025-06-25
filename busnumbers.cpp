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
  int n;
  cin >> n;
  vi arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int i = 0;
  vi result;
  while (i < n){
    int start = arr[i];
    while (i + 1 < n and arr[i+1] == arr[i] + 1){
      i+=1;
    }
    int end = arr[i] + 1;
    if (end-start > 1){
      vi pair;
      result.push_back((start, end));
    }
    else{
      result.push_back(start);
    }
  }

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  solve();

}
