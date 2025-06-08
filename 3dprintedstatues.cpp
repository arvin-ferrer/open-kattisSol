#include <iostream>
#include <math.h>
using namespace std;
void sol(){
  int n;
  int countPrinters = 1;
  int countday = 1;

  cin >> n;
  while (countPrinters < n){
    countPrinters *= 2;
    countday++;
      
  } 
  cout << countday << endl;
  }
int main(){
  sol();


}
