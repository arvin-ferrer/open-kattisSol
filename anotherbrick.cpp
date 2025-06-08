#include <bits/stdc++.h>

using namespace std;

int main(){
  int h, w, temp, n;
  int l;
  int currentWidth = 0;
  vector <int> length;
  cin >> h >> w >> temp;
  n = temp;
  while (temp--){
    cin >> l;
    length.push_back(l);
  }

  for (int i: length) { 
    currentWidth += i;
    // cout << "#brick: " << i << " currentWidth: " << currentWidth << " height: " << h << endl;
      if (currentWidth == w && h == 0){
        cout << "YES\n";
        return 0;
      }
      if (i > w){
        cout << "NO\n";
        return 0;
      }
      else if (currentWidth == w){
        h--;
        currentWidth = 0;
        if(h == 0){
          cout << "YES\n";
          return 0;
        }
      }
  }
    if (h == 0 && currentWidth == 0){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
}
