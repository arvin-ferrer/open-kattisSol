#include <bits/stdc++.h>
using namespace std;

void sol(){
  int n;
  cin >> n;
  vector <int> arr(n);
  vector <int> store;
  for (int i = 0; i < n; ++i){
      cin >> arr[i];
  }
  int current = arr[0];
  store.push_back(arr[0]);
  for (int i = 0; i < n; ++i){
    for (int j = i+1; j < n; ++j){
      if (arr[j] > current){
        store.push_back(arr[j]);
        current = arr[j];
        break;
      }
    }
  }
  for (int i: store){
    cout << i << " ";
  }
  cout << endl;
}
int main(){
  sol();
}
