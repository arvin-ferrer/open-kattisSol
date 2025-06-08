#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string name;
  cin >> n;
  vector <string> names;
  while (n--){
    cin >> name;
    names.push_back(name);
  }
  vector <string> UnsortedNames = names;
  vector <string> decreasingNames = names;
  sort(names.begin(), names.end());
  sort(decreasingNames.begin(), decreasingNames.end(), greater<>());
  if (UnsortedNames == names){
    cout << "INCREASING\n";
  }
  else if (decreasingNames == UnsortedNames){
    cout << "DECREASING\n";
  }
  else{
    cout << "NEITHER\n";
  }
  

}
