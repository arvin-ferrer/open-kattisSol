#include <bits/stdc++.h>

using namespace std;
int main(){
  string s;
  cin >> s;
  int len = s.length();
  if (s.length() == 1){
    cout << s;
  }
  else{
    for(int i = 0; i < len-1; i++){
      if(s[i] != s[i+1]){
        cout << s[i];

      }
      if (i == len-2){
        if (s[i] != s[i+1]){
          cout << s[i+1];
        }
        else{
          cout << s[i];
        }
      }
    }
  }
}
