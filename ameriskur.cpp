#include <bits/stdc++.h>


using namespace std;
int main(){

  int n;
  double fbfield = 0.09144;
  cin >> n;
  double x = n*fbfield;
  if (x<1){
  cout << fixed << setprecision(5) << x<< endl;
  }
  else{
    cout << fixed << setprecision(14) << x << endl;
  }

}
