#include <bits/stdc++.h>

using namespace std;
int main(){
  string password;
  string sentence;
  cin >> password >> sentence;
  vector <char> letters;
  int index = 0;
  for (char c: sentence){
      if (c == password[index]){
        letters.push_back(c);
        // password.erase(password.find(c), 1);
        
        index ++;
      }
      else if (password.find(c) != -1){
        letters.push_back(c);
        password.erase(password.find(c), 1);
      }
  }
  for (char c: letters) cout << c << " ";

}
