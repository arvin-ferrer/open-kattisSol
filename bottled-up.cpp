#include <iostream>


using namespace std;
void sol(){
  long s, v1, v2;
  long total = 10000000000;
  long minI, minJ;
  bool status = false;
  cin >> s >> v1 >> v2;
  for (int i = 0; i <= s; ++i){
    for (int j = 0; j <= s; ++j){
      if ((i*v1) + (j*v2) == s){
        if (i+j < total){
          total = i+j;
          minI = i;
          minJ = j;
          status = true;
        }
      }
    }
  }
  if (status){
  cout << minI << " " << minJ << endl;
  }
  else{
    cout << "Impossible" << endl;
  }
}

int main(){
  sol();


}
