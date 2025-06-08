#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
  int n;
  cin >> n;
  if (n == 0 or n == 1){
    cout << 0;
  }
  else{
    cout << pow(2,n) - (n+1);
  }
}
