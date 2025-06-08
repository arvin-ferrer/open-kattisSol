#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  int t;
  int prev1, prev2;
  int curr1, curr2;
  while (true){
  cin >> t;
  int total = 0;
  if (t == -1) break;
  for (int i = 0; i < t; i++){
    cin >> curr1 >> curr2;
    if (i == 0){
      total += curr2*curr1;
      prev2 = curr2;
    }
    else{
      total += (curr2-prev2)*curr1;
      prev2 = curr2;
    }
  }
  cout << total << " miles\n";
  }
}
