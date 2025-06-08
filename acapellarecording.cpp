#include <bits/stdc++.h>


using namespace std;
void sol(){
  int n, d, input, temp;
  cin >> n >> d;
  temp = n;
  vector <int> arr;
  vector <vector<int>> count;
  while (n){
    cin >> input;
    arr.push_back(input);
    n--;
  }
  sort(arr.begin(), arr.end());
  for (int i = 0; i < temp; ++i){
    vector <int> subset;
    for (int j = i+1; i < temp; ++j){
      if (arr[j]-arr[i] <= d){
        subset.push_back(arr[i]);
        subset.push_back(arr[j]);
      }
      else{
        subset.push_back(arr[i]);
      }
    }
    count.push_back(subset);
  }

}

int main(){
  
  sol();

}
