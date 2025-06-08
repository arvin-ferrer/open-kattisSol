#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string temp;
    vector <string> names;
    cin >> n;
    
    while (n--){
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer
      getline(cin, temp); // Now reads full name correctly
      names.push_back(temp);
    }
    for (auto nm: names){
      cout << nm << " \n";
    }

}
