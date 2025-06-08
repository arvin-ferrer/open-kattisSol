#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  long double total;
  int n;
  cin >> n;
  while(n--){
    int students;
    
    cin >> students;
    long long temp = students;
    __int128 candies = 0;
    while(students--){
      unsigned long long x;
      cin >> x;
      candies += x;
    }
    if (candies % temp == 0){
      cout << "YES\n";  
    }
    else{
      cout << "NO\n";
    }

  }
  
}
