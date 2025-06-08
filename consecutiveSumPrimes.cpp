#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector <int> primes;
  for (int i = 0; i < n; i++){
    primes.push_back(true);
  }
  primes[0] = false;
  primes[1] = false;
  for (int i = 2; i <= sqrt(n); i++){
    if (primes[i]){
      for (int j = i*i; j < n; j+= i){
        primes[j] = false;
      }
    }
  }
  long long currentSum = 0;
  int count = 0;
  for(int i=2; i < n; i++){
    if (primes[i]){
        currentSum += i;
        count++;
    }
    if (primes[currentSum]){

    }
  }

}
