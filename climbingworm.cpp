#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b, h;

  cin >> a >> b >> h;
  int count = 0;
  int climb = 0;
  while (climb <= h){
    climb += a-b;
    count++;
    if (climb >= h){
      break;
    }
    climb -= b;
  }
  cout << count << endl;


}
