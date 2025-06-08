#include <bits/stdc++.h>

using namespace std;
void sol(){
  int n, s, grade, temp;
  cin >> n;

  while (n){
    double average = 0;
    vector <int> arr;
    int count = 0;
    cin >> s;
    temp = s;
    while (s){    
      cin >> grade;
      arr.push_back(grade);
      s--;
    }
    for (int i: arr){
      average += i;
    }

    average = average/temp;
    for (int i: arr){
      if (i > average){
        ++count;
      }
    }

    double x = double(count)/temp;
    cout << fixed << setprecision(3)<< x*100 << "% ";
    n--;
  }

  cout << endl;

}

int main(){

    sol();
}
