#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int countA = 0;
  int countR = 0;
  string input;
  for (int i = 0; i < n*n; i++){
    cin >> input;

    if (input == "Akureyri"){
      countA++;
    }
    else if (input == "Reykjavik"){
      countR++;
    }
      
  }
  if (countA > 0 && countR > 0){
    cout << "Akureyri" << countA << endl;
    cout << "Reykjavik" << countR << endl;
  }
  else if (countA > )
}
