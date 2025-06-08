#include <bits/stdc++.h>

using namespace std;

int main(){
  int p, a, b, c, d, n;
  double maximumDecline = INT_MIN;
  vector <int> prices;
  vector <double> declines;
  cin >> p >> a >> b  >> c >> d >> n;
  for (int i=1; i <= n; i++){
    prices.push_back(i);
  }
  for (int k: prices){
    double decline = p* (sin((a*k)+b) + (cos((c*k)+d)+2));
    declines.push_back(decline);
    // cout << decline << endl;
  }
  for (int i = 0; i < declines.size()-1; i++){
    for (int j = i+1; j < declines.size(); j++){
        // cout << declines[i] << " " << declines[j] <<  ""<<endl;
        if (declines[j] < declines[i]){
          if (declines[i]-declines[j] > maximumDecline){
            maximumDecline = declines[i]-declines[j];
          }
        }
    }
  
  }
  cout << maximumDecline << endl; 


}
