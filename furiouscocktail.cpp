#include <bits/stdc++.h>

using namespace std;

void sol(){
   int n, t, elem, temp;
   cin >> n >> t;
   temp = n;
   bool all = true;
   vector <int> potions;
   while(n){
      cin >> elem;
      potions.push_back(elem);
      n--;
   }
  sort(potions.begin(), potions.end(), greater());
  for (int i = 0; i < temp; ++i){
    int remain = temp-(i+1);
    if ((remain*t) >= potions[i]){
        all = false;
    } 
  }
  if (all){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
    

}

int main(){
  sol();
  
}
