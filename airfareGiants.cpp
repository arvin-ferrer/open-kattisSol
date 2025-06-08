#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, price;
  vector <int> prices;
  cin >> n;
  while (n--){
    cin >> price;
    prices.push_back(price);
  }
  sort(prices.begin(), prices.end());
  int halfPrice;
  halfPrice = prices[prices.size()-1];
  halfPrice = halfPrice/2;
  if (halfPrice >= prices[0]){
    cout << 0 << endl;
  }
  else{
    cout << abs(halfPrice-prices[0]) << endl;
  }

}

