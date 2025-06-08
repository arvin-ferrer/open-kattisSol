#include <iostream>

using namespace std;

int main(){

  int n, a, b;
  cin >> n >> a >> b;
  int cntFizz = 0;
  int cntBuzz = 0;
  int cntFB = 0;
  for (int i = 1; i <= n; i++){
    if (i % a == 0 && i % b == 0) cntFB ++;
    else if(i % a == 0 && i % b != 0) cntFizz++;
    else if(i%b == 0) cntBuzz++;
  }
  cout << cntFizz << " " << cntBuzz << " "<< cntFB;
}
