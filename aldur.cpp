#include <bits/stdc++.h> 

using namespace std;

int main(){
  int n;
  int youngest = INT_MAX;
  int age;
  cin >> n;
  while(n--){
    cin >> age;
    if (age < youngest){
      youngest = age;
    }
  }
  cout << youngest << endl;

}
