#include <bits/stdc++.h>

using namespace std;
#define long long ll;

int main(){
  int n, m;
  cin >> n >> m;

  //1 5 //1-5  = 6
  //6 3 //6-3 = 9+5 = 14 
  //14 6 // = 9 < 14(arrival)
  int a, s;
  int count = 0;
  vector <pair<int, int>> tt;
  for (int i = 0; i < n; ++i){
    cin >> a >> s; 
    if (s <= m){
      count ++;
    }
  }
  cout << count;
}
