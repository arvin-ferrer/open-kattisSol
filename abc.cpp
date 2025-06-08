#include <bits/stdc++.h>
using namespace std;


void sol(){
  int n = 3;
  int num;
  string letters;
  vector <int> sorted;
  
  while(n){
    cin >> num;
    sorted.push_back(num);
    n--;
  }
  cin >> letters;
  bool swapped = true;
  while (swapped){
    swapped = false;
    for (int i = 0; i < 2; ++i){
      if (letters[i] <= letters[i+1] && sorted[i] >= sorted[i+1] ||
          (letters[i] >= letters[i+1] && sorted[i] <= sorted[i+1])){
          int temp = sorted[i];
          sorted[i] = sorted[i+1];
          sorted[i+1] = temp;
          swapped = true;
      }
      else if (letters[0] > letters[2] && sorted[0] < sorted[2]){
        int temp = sorted[0];
        sorted[0] = sorted[2];
        sorted[2] = temp;
        swapped = true;
    }
      else if (letters[0] < letters[2] && sorted[0] > sorted[2]){
        int temp = sorted[0];
        sorted[0] = sorted[2];
        sorted[2] = temp;
        swapped = true;
   
      }
    }
  }
  for (int i: sorted){
    cout << i << " ";
  }
  cout << endl;
}

int main(){
  sol();
}
