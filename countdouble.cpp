#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main(){
  int n, m;
  cin >> n >> m;
  vector <int> arr(n);
  for (int i = 0; i < n; ++i){
    cin >> arr[i];
  }

  int count = 0;
  for (int i = 0; i <= n-m; ++i){
    int even = 0;
    for (int j = i; j < i+m; ++j){
       if (arr[j] % 2 == 0) even++;
    }
    if (even >= 2) count++;
  }
  cout << count << endl;
}
