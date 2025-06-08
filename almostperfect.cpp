#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  while (cin >> n){
    long long summ = 1;
    for (int i = 2; i*i < n; i++){
      if (n % i == 0){
        summ+= i;
        if (i*i != n){
          summ += int (n/i);
        }
      }
    }
    if (summ == n){
      cout << n << " perfect\n";
    }
    else if (n-summ <= 2){
      cout << n << " almost perfect\n";
    }
    else{
      cout << n << " not perfect\n";
    }
  }

}
