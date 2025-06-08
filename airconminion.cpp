#include <bits/stdc++.h>
using namespace std;

void sol(){

  int n, temp;
  int overlap = 0;
  int first, sec;
  cin >> n;
  temp = n;
  vector <pair<int, int>> interval;
  while (n--){
    cin >> first >> sec;
    interval.push_back({first, sec});
  }
  sort(interval.begin(), interval.end(), [](auto &left, auto &right) {
    return left.second < right.second;
});
  int lasttemp = 0;
  for (auto i: interval){
    if(i.first > lasttemp){
    overlap ++;
    lasttemp = i.second;
    }

  }
 
  cout << overlap << endl;;
}

int main(){
  sol();
}
