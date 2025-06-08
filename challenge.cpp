#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  int n, k, d;
  cin >> n >> k >> d;
  int count = 0;
  for (int i = 0; i < n; i ++){
    int f;
    cin >> f;
    if (f+14 <= k+d){
        count++;
    }
  }
  cout << count << endl;

}
