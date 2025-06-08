#include <bits/stdc++.h>


using namespace std;

int main(){

  int t;
  cin >> t;
  while(t--){
    int t;
    cin >> t;
    int n,a,b;
    cin >> n >> a >> b;
    string coor;
    int x = 0;
    int y = 0;
    cin >> coor;
    for (int i = 0; i < n; i++){
      if (coor[i] == 'N'){
        y++;
      }
      else if (coor[i] == 'E'){
        x++;
      }
      else if (coor[i] == 'S'){
        y--;
      }
      else{
        x--;
      }
      
    }
    if (x == a and y == b){
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }

  } 

}


