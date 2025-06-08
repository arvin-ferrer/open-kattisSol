#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector <int> grill(n);
  vector <int> temp(n);
  for (int i = 0; i < n; i++){
    cin >> grill[i];
    temp[i] = grill[i];
  }
  int count = 0;
  int burger = 0;

  while (burger < m){
  for(int i = 0; i < n; i++){
    grill[i] -= 1;
    if(grill[i] == 0){
      burger++;
      grill[i] = temp[i];
    }
    count ++;
  }

  }
  cout << count << endl;

  
}
