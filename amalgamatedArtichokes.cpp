#include <bits/stdc++.h>

using namespace std;

int main(){
  int p, a, b, c, d, n;
  double maxPrice = -1e18;
  double largestDecline = 0;
  cin >> p >> a >> b  >> c >> d >> n;
  for (int k = 1; k <= n; k++){
    double price = p * ( sin(a*k + b) + cos(c*k + d) + 2 );
    maxPrice = max(price, maxPrice);
    double decline = maxPrice - price;
    largestDecline = max(largestDecline, decline);
}
  if (largestDecline > 0 )
  cout << fixed << setprecision(6) << largestDecline<< endl; 
  else
  cout << "0.00" << endl;


}
