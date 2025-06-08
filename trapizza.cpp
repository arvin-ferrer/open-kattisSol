#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main(){
  int d, s1, s2, h;
  cin >> d >> s1 >> s2 >> h;
  double circle = M_PI*d*d;
  double trapezoid = (  (s1+s2)*h)/2.0;
  if (circle > trapezoid) cout << "Mahjong\n";
  else if(trapezoid > circle) cout << "Trapizza!\n";
  else cout << "Jafn storar!\n";

}
