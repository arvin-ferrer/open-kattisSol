#include <bits/stdc++.h> 
using namespace std;

void sol(){
  int n;
  string str;
  string newstr;
  int counter = 0;
  cin >> n;
  cin.ignore();
  while (counter < n){
    getline(cin, str);
    for (int i = 1; i < str.length(); ++i){
      str[i] = tolower(str[i]);
    }
    str[0] = toupper(str[0]);
    cout << str << endl;
    counter ++;
  }
}


int main(){
  sol();
}
