#include <bits/stdc++.h>

using namespace std;

void sol(){
  int n, m;
  string team;
  cin >> n >> m;
  vector <string> teams;
  for (int i = 1; i <= n; i++){
      teams.push_back("T" + to_string(i));
      
  }
  for (int i = 0; i < m; i++){
  string t1, t2;
  cin >> t1 >> t2; 
  auto it1 = find(teams.begin(), teams.end(), t1);
  auto it2 = find(teams.begin(), teams.end(), t2);
  int d1 = distance(teams.begin(), it1);
  int d2 = distance(teams.begin(), it2);
  if (d1 > d2){
    teams.erase(it1);
    teams.insert(it2+1, t1);
    }
  }
  for (auto i: teams) cout << i;
}


// T1 T2 T3 T4 T5
// T4 T1
// T2 T3 T4 T1 T5
// T3 T1
// T5 T3
// T2 T4 T1 T5 T3

int main(){
  sol();
}
