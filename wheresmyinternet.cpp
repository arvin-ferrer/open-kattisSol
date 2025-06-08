#include <bits/stdc++.h>

using namespace std;
#define ll long long 

int main(){
  int n,m;
  cin >> n >> m;
  //1 already connected
  //3 4
  //4 3
  //2 1
  //3 2
  vector <pair<int, int>> pairs;
  int first, sec;
  while(m--){
    cin >> first >> sec;
    pairs.push_back({first, sec});
  }
  sort(pairs.begin(), pairs.end(), [](auto &left, auto &right)
  {return left.second < right.second;});
  for (auto i: pairs){
    cout << i.first << i.second;   
  }

}
